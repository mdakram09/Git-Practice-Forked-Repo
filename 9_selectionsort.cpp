//idea is dividing the array into 2 subarrays: sorted (left) and unsorted (right)
//initially completely in right unsorted subarray, sorting done till completely in left sorted subarray
//pick the minimum element from right and put in left and swap it with the first element of unsorted subarray

#include <bits/stdc++.h>
using namespace std;

void display(int arr[], int n);
void selection_sort(int arr[], int n){
    int min;
    for(int i=0; i<n-1; i++){//1st to (n-1)th element
        min=i;
        for(int j=i+1; j<n; j++){//i+1 to nth element
            if(arr[j]<arr[min])
                min=j;
        }
        swap(arr[min],arr[i]);//using swap function instead of taking temp variable
    }
}

void display(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[] = {16,18,14,4,8,28,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    selection_sort(arr, n);
    cout << "Sorted Array: ";
    display(arr,n);
    return 0;
}

//Time Complexity: O(n^2) as there are two nested loops
//never requires more than n swaps as it is an in-place sorting algorithm
//Its stability depends upon implementation
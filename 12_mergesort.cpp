//divide and conquer
//It is one of the most efficient sorting algorithms.
//Divide the given array into two parts recursively until it becomes a single element, trivial to sort. The most important part of the algorithm is to merge two sorted arrays into a single array.

//Idea of repeatedly comparing pairs of adjacent elements and then swapping their positions if they exist in the wrong order.
//In one iteration the smallest/largest element will result at its final place at end/beginning of an array.
//So in some sense movement of an element in an array during one iteration of bubble sort algorithm is similar to the movement of an air bubble that raises up in the water, hence the name.

#include <bits/stdc++.h>
using namespace std;

void display(int arr[], int n);
void merge(int arr[], int l, int m, int r){
    int n1=m-l+1;
    int n2=r-m;
    int left[n1], right[n2];
    for(int i=0; i<n1; i++){
        left[i] = arr[l+i];
    }  	 
    for(int j=0; j<n2; j++){
        right[j] = arr[m+1+j];
    }
    // Merge the temp arrays back into arr[l..r]
    // Initial index of the subarrays
    int i=0, j=0;
    // Initial index of merged subarray
    int k = l;
    while(i<n1 && j<n2){
        if(left[i] <= right[j]){
            arr[k++] = left[i++];
        }
        else{
            arr[k++] = right[j++];
        }
    }
    while(i<n1){//Copy the remaining elements of left[ ], if there are any
        arr[k++] = left[i++];
    }
    while(j<n2){
   	    arr[k++] = right[j++];
    }
}
void merge_sort(int arr[], int l, int r){
    if(l>=r){
        return;
    }
    int m = l + (r-l)/2;
    merge_sort(arr,l,m);
    merge_sort(arr,m+1,r);
    merge(arr,l,m,r);
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
    merge_sort(arr, 0, n-1);
    cout << "Sorted Array: ";
    display(arr, n);
    return 0;
}

//Time Complexity: O(n*log(n)) in all 3 cases as it always divides the array into two halves and takes linear time to merge two halves.
//Recurrence relation: T(n) = 2T(n/2) + θ(n) - case 2 of master method

//stable but not in-place

//Application
//Sorting linked lists in O(nLogn) time. Unlike arrays, linked list nodes may not be adjacent in memory. Unlike an array, in the linked list, we can insert items in the middle in O(1) extra space and O(1) time. Therefore, the merge operation of merge sort can be implemented without extra space for linked lists.

//Drawbacks
//1. Slower comparative to the other sort algorithms for smaller tasks.
//2. Requires an additional memory space of 0(n) for the temporary array.
//3. It goes through the whole process even if the array is sorted.
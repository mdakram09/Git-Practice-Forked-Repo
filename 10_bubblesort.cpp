//Sinking sort
//Idea of repeatedly comparing pairs of adjacent elements and then swapping their positions if they exist in the wrong order.
//In one iteration the smallest/largest element will result at its final place at end/beginning of an array.
//So in some sense movement of an element in an array during one iteration of bubble sort algorithm is similar to the movement of an air bubble that raises up in the water, hence the name.

#include <bits/stdc++.h>
using namespace std;

void display(int arr[], int n);
void bubble_sort(int arr[], int n){
    for(int i=0; i<n-1; i++){ //1st to (n-1)th element as the last element will be already sorted
        for(int j=0; j<n-i-1; j++){ //last i elements are already in space
            if(arr[j]>arr[j+1])
                swap(arr[j], arr[j+1]);
        }
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
    bubble_sort(arr, n);
    cout << "Sorted Array: ";
    display(arr, n);
    return 0;
}

//Time Complexity: O(n^2) as there are two nested loops.

//Can be optimised by using a flag variable which checks if there are no swaps in the inner loop

//stable, in-place
//Worst case: when array is reverse sorted: O(n^2)
//Average case: O(n^2)
//Best case: O(n) - sorted

//In computer graphics, it is popular for its capability to detect a very small error (like a swap of just two elements) in almost-sorted arrays and fix it with just linear complexity (2n). 
//It is used in a polygon filling algorithm, where bounding lines are sorted by their x coordinate at a specific scan line (a line parallel to x-axis) and with incrementing y their order changes (two elements are swapped) only at intersections of two lines
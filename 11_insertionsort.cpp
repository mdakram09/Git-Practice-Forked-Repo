//when sorted array is built having one item at a time
//Array elements are compared with each other sequentially and then arranged simultaneously in order

//The analogy can be understood from the style we arrange a deck of cards in our hand. This sort works on the principle of inserting an element at a particular position, hence the name Insertion Sort.

//1: Iterate from arr[1] to arr[n] over the array.
//2: Compare the current element (key) to its predecessor.
//3: If the key element is smaller than its predecessor, compare it to the elements before. Move the greater elements one position up to make space for the swapped element.
#include <bits/stdc++.h>
using namespace std;

void display(int arr[], int n);
void insertion_sort(int arr[], int n){
    int temp,j;
    for(int i=1; i<n; i++){//comparing 2nd to nth element with the elements before them
        temp = arr[i];
        j=i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1] = temp;
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
    insertion_sort(arr, n);
    cout << "Sorted Array: ";
    display(arr, n);
    return 0;
}

//Time Complexity: O(n^2) as there are two nested loops.

//stable, in-place
//Worst case: if reverse sorted O(n^2)
//Average case:
//Best case: O(n) if sorted

//Insertion sort is used when number of elements is small. It can also be useful when input array is almost sorted, only few elements are misplaced in complete big array.

//Use binary search to reduce the number of comparisons in normal insertion sort.
//Binary Insertion Sort uses binary search to find the proper location to insert the selected item at each iteration. In normal insertion, sorting takes O(i) (at ith iteration) in worst case. We can reduce it to O(logi) by using binary search. The algorithm, as a whole, still has a running worst case running time of O(n^2) because of the series of swaps required for each insertion. https://www.geeksforgeeks.org/binary-insertion-sort/

//Insertion Sort for Linked List
//1. Create an empty sorted (or result) list
//2. Traverse the given list, for every node: Insert current node in sorted way in sorted or result list.
//3. Change head of given linked list to head of sorted (or result) list. 
//https://www.geeksforgeeks.org/insertion-sort-for-singly-linked-list/
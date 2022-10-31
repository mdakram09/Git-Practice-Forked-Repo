//works only on sorted set of elements
//divide and conquer approach

#include <bits/stdc++.h>
using namespace std;

int binarysearch(int arr[], int l, int r, int k){
    int mid;
    while(l<=r){
        mid = l + (r-l)/2;
        if(arr[mid]==k)
            return mid;
        else if(arr[mid]<k)
            return binarysearch(arr,mid+1,r,k);//or l=mid+1;
        else
            return binarysearch(arr,l,mid-1,k);//or r=mid-1;
    }
    return -1;
}

int main(){
    int arr[] = {0,1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = binarysearch(arr, 0, n-1, 6);
    (result == -1)? cout << "Element not found" : cout << "Element found at index " << result << endl;
    return 0;
}

//Time Complexity = O(log n)
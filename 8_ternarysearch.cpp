//works only on sorted set of elements
//divide and conquer approach - dividing into three parts

#include <bits/stdc++.h>
using namespace std;

int ternarysearch(int arr[], int l, int r, int k){
    int mid1,mid2;
    if(l<=r){
        mid1 = l + (r-l)/3;
        mid2 = r - (r-l)/3;
        if(arr[mid1]==k)
            return mid1;
        else if(arr[mid2]==k)
            return mid2;
        else if(arr[mid1]>k)
            return ternarysearch(arr,l,mid1-1,k);//or r=mid1-1;
        else if(arr[mid2]<k)
            return ternarysearch(arr,mid2+1,r,k);//or l=mid2+1;
        else//it is between mid1 and mid2
            return ternarysearch(arr,mid1+1,mid2-1,k);
    }
    return -1;//not found
}

int main(){
    int arr[] = {0,1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = ternarysearch(arr, 0, n-1, 6);
    (result == -1)? cout << "Element not found" : cout << "Element found at index " << result << endl;
    return 0;
}

//Time Complexity = O(log3 n) [base 3, binary = base 2 as two subproblems]
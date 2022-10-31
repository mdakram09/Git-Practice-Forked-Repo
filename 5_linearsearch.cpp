//traversing the array linearly and checking each element one by one

#include <bits/stdc++.h>
using namespace std;

int linearsearch(int arr[], int n, int k){
    int i;
    for(i=0;i<n;i++){
        if(arr[i]==k)
            return k;
    }
    return -1;
}

int main(){
    int arr[] = {0,1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = linearsearch(arr, n, 6);
    (result == -1)? cout << "Element not found" : cout << "Element found at index " << result << endl;
    return 0;
}

//Time Complexity = O(n)
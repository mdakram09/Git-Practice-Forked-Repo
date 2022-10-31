//for sorted array, uses binary search in working so Time complexity: O(log n)
//lower bound of a number: first element in that array that is not smaller than the given number
//std::lower_bound(start_ptr, end_ptr, num) - returns an iterator pointing to the next smallest number just >= num
//upper bound of a number: first element in that array that is just higher than the given number or last if no such value is found
//std::upper_bound(start_ptr, end_ptr, num) - returns the pointer pointing to the required element
//if there are multiple such value that are =, the function returns the iterator of the first such value
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> Ar={1,1,1,2,4,4,5,6,7};
    auto l = lower_bound(Ar.begin(), Ar.end(), 1);//smallest number >=, if multiple 1s it gives 2nd one - the one next to first occurence 
    auto u = upper_bound(Ar.begin(), Ar.end(), 1);//>, if multiple 1s then upper bound gives last 1
    cout << (*l) << endl;
    cout << (*u) << endl;//if > array_max both l and u = 0
    return 0;
}

//Time Complexity
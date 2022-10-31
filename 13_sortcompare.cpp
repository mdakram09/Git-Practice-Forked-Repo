#include <bits/stdc++.h>
using namespace std;
bool compare(int a, int b)
{
    return (a>b);  
 // When this returns true, a will come before b in sorted array 
}
int main()
{
   vector<int> v={10, 14, 2, 64, 13};
   int n = v.size();
    // sort in descending order
    sort(v.begin(),v.end(), compare);
    cout << "The vector sorted in descending order is: \n";
    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
    return 0;
}
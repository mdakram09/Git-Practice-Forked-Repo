#include <iostream>
using namespace std;

int main() {
  // your code goes here
  int T;
  cin >> T;
  while (T--) {
    int A, B;
    cin >> A >> B;
    int count = 0;
    A = A % 3;
    B = B % 3;
    if (A == 0 || B == 0)
      count = 0;
    else if (A == B)
      count = 1;
    else
      count = 2;

    cout << count << endl;
  }
}
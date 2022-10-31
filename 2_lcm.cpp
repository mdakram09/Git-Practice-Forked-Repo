//LCM (Least Common Multiple) of 2 integers u and v refers to the smallest possible integer which is divisible by both u and v.

//u*v=lcm(u,v)*gcd(u*v)
//or, lcm(u,v)=(u*v)/gcd(u,v) [provided u and v both are not zero]

#include <bits/stdc++.h>
using namespace std;

int lcm (int a, int b) {
    return a / gcd(a, b) * b;
}

//Time complexity: 
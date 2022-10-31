//GCD(Greatest Common Divisor) or HCF(Highest Common Factor) of 2 integers a and b
//refers to the greatest possible integer which divides both a and b.

//Brute force approach
//Start from the smaller number and iterate to 1.
//As soon as we find a number that divides both a and b, we can return it as the result.

//Euclidean Algorithm
//If we subtract the smaller number from the larger number then the GCD is not changed.
//gcd(a,b)=gcd(b,a-b)[considering a>=b]

//If a is 0 and b is non-zero, the GCD is by definition b(or vice versa). If both are zero, then the GCD is undefined; but we can consider it to be zero, which gives us a very basic rule:
//If one of the numbers is 0, then the GCD is the other number.
#include <bits/stdc++.h>
using namespace std;

int gcd_recursive(int a, int b){
    if (b == 0)  
        return a;  //if one term is 0, then the  other one is GCD
    else
        return gcd_recursive(b, a % b);
}

int gcd_iterative (int a, int b) {
    while (b) {  //loop continues until b is non-zero
        a %= b;
        swap(a, b);
    }
    return a;
}
//Time complexity: O(log(min(a,b)))


//gcd(a,b)=gcd(b,a)
//gcd(a,b,c)=gcd(a,gcd(b,c))=gcd(gcd(a,b),c)=gcd(b,gcd(a,c))
//If both the numbers are even, then we can say, gcd(2*a,2*b)=2*gcd(a,b)
//If only one of the numbers is even, while the other is odd, gcd(2*a,b)=gcd(a,b) [b is odd]
//If both numbers are odd, gcd(a,b)=gcd(b,a−b) [provided a>=b]

//Extended Euclidean Algorithm: Allows us to find a linear combination of a and b which results in the GCD to a and b.
//a*x+b*y=gcd(a,b) [x,y are integer coefficients]
//e.g, a=15, b=35
//Therefore, gcd(a,b)=5, x=-2, y=1 Since, 15*(-2)+35*1=5
//Sieve of Eratosthenes is an algorithm for finding all the
//prime numbers in a segment in range 1 to n in O(n log(log n)) operations

//Naive approach
//We can check the divisors up to sqrt(i) since one of the divisors will be smaller than or equal to sqrt(i).
//for each number, we check whether it is prime or not.
//The time complexity is 0(n*sqrt(n))

//In the sieve algorithm, we create an integer array of length n+1(for numbers from 1 to n) and mark all of them as prime. Then we iterate from 2 till sqrt(n). We mark all proper multiples of 2 (since 2 is the smallest prime number) as composite. A proper multiple of a number num is a number greater than num and divisible by num. Then we find the next number that hasn't been marked as composite, in this case, it is 3. This means 3 is prime, and we mark all proper multiples of 3 as composite and we continue this procedure.

                                                        
/*#include <bits/stdc++.h> 
using namespace std; 
int main() 
{ 
	int n;
	cin>>n;
	vector<int> prime(n+1, 1);
	prime[0] = prime[1] = 0;
	for (int i = 2; i * i <= n; i++) {
    	if (prime[i]==1) {
        	for (int j = i * i; j <= n; j += i)
            	prime[j] = 0;
    	}
	}
	for(int i=1;i<=n;i++)if(prime[i]==1)cout<<i<<endl;
}*/

//We can reduce the number of operations performed by the algorithm by stopping checking for even numbers as all even numbers (except 2) are composite numbers for we can check for odd numbers only.

#include <bits/stdc++.h> 
using namespace std; 
int main(){ 
	int n;
	cin >> n;
	vector<int> prime(n+1, 1);
	prime[0] = prime[1] = 0;
	for(int i = 3; i * i <= n; i+=2) {
    	if(prime[i]==1){
        	for (int j = i*i; j<=n; j+=i)
            	prime[j] = 0;
    	}
	}
	if(n>=2){
        cout << 2 << endl;
    }
	for(int i=3;i<=n;i+=2){
        if(prime[i]==1){
            cout<<i<<endl;
        }
    }
}
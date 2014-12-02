#include <iostream>
#include <math.h>
using namespace std;

// find the sum of all the primes below two million.
bool isPrime(unsigned long long n){
bool prime = true;
    for (int j = 2; j <= sqrt(n); j++){
        if(n%j==0){
            prime = false;
            break;
        } 
    }
return prime;
}

int main(){
	unsigned long long sum = 2;
	for(unsigned long long i = 3; i<2000000; i+=2){
		if(isPrime(i)){
		sum +=i;
		}
}
	cout << sum;
}
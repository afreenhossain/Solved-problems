#include <iostream>
#include <math.h>
using namespace std;

// Largest prime factor
bool isPrime(unsigned long long n){
bool prime = true;
    for (int j = 2; j < sqrt(n); j++){
        if(n%j==0){
            prime = false;
            break;
        } 
    }
return prime;
}

int main (){
unsigned long long number = 600851475143ULL;

for(unsigned long long i = sqrt(number); i >= 2; i--){
    if(number%i==0){
        if(isPrime(i)){
            cout << i;
            break;
        }
    }
}
return 0;
}

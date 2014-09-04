
#include <iostream>
using namespace std;

// Multiples of 3 and 5 below 1000
int main(){
int sum = 0;
for (int i=3; i<1000; i++){
      if(i%3==0 || i%5==0){
           sum += i;
      } 
}
      cout << sum;
      return 0;
}

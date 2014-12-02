

#include <iostream>
using namespace std;

// Generating fibonacci and finding the sum of even numbers
int main (){

int last = 0;
int next = 1;
int sum = 0;
int evenSum = 0;

do {
//cout << next << "\n";
sum = last + next;
last = next;
next = sum;
     if (next%2==0){
           evenSum +=next;
     }
} while (next < 4000000);
cout << evenSum;
return 0;
}

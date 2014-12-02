#include <iostream>
#include <math.h>
using namespace std;
 
//Largest palindrome of 2 three digit numbers
bool isPalindrome(string n){
bool palindrome = true;
for(int k = 0; k<=(round(n.length()/2)); k++){
   if(n[k]!=n[n.length()-(k+1)]){
	palindrome = false;
	break;
}
}
return palindrome;
}
 
int main (){
int max = 0;
	for(long i = 999; i > 99; i--){
	    for(long j = 999; j > 99; j--){
		string str = to_string(i*j);
		    if (isPalindrome(str)){
                       if(i*j>max){
                       max = i*j;
                       }
					}
				}
			}
			cout << max << "\n";
return 0;
}

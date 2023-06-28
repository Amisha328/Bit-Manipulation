// Swap numbers withour using third variable

/*
a = 5, b = 7

step 1:  a = a^b => a = 5 ^ 7, b = 7
step 2:  b = a^b => a = 5 ^ 7, b = (5 ^ 7) ^ 7 = 5
step 3:  a = a^b => a = (5 ^ 7) ^ 5 = 7, b = 5 
hence now a = 7 and b = 5
*/

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
	void swap(int a, int b){
                    a = a ^ b;
                    b = a ^ b;
                    a = a ^ b;
                    cout<<"a = "<<a<<"b ="<<b<<endl;
          }
};
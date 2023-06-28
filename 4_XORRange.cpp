// Find XOR of numbers from the range [L, R]

#include <bits/stdc++.h>
using namespace std;

class Solution{
private:
int calculateXOR(int n)
{
    if(n%4 == 0) return n;
    else if(n%4 == 1) return 1;
    else if(n%4 == 2) return (n+1);
    else if(n%4 == 3) return 0; 
    return 0;
}
public:
   int rangeXor(int L, int R){
         return calculateXOR(R) ^ calculateXOR(L-1); 
   }
};

int main(){
          int L, R;
          cin>>L>>R;
          Solution obj;
          cout<<obj.rangeXor(L, R)<<endl;
          return 0;
}
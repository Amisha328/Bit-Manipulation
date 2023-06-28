// Remove the last set bit

/*
  n = 53 => 1 1 0 1 0 1
n-1 = 52 => 1 1 0 1 0 0
          & ------------
            1 1 0 1 0 0

  n = 12 => 1 1 0 0
n-1 = 11 => 1 0 1 1
      & -------------
            1 0 0 0
*/

#include<bits/stdc++.h> 
using namespace std; 

class Solution
{
public:
    int removeLastBit(int N)
    {
        return N & (N-1);
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        
        Solution ob;
        int ans = ob.removeLastBit(N);
        cout << ans << endl;
    }
    return 0;
}
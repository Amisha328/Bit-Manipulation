// Clear Kth Bit

#include<bits/stdc++.h> 
using namespace std; 

class Solution
{
public:
    int clearKthBit(int N, int K)
    {
        int mask = ~(1 << K-1);
        return N & mask;
    }
    
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        
        Solution ob;
        int ans = ob.clearKthBit(N,K);
        cout << ans << endl;
    }
    return 0;
}
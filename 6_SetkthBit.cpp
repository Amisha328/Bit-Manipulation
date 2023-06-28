// Set kth bit
// Problem link:
// https://practice.geeksforgeeks.org/problems/set-kth-bit3724/1?


#include<bits/stdc++.h> 
using namespace std; 

class Solution
{
public:
    int setKthBit(int N, int K)
    {
        int mask = 1 << K;
        return N | mask;
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
        int ans = ob.setKthBit(N,K);
        cout << ans << endl;
    }
    return 0;
}
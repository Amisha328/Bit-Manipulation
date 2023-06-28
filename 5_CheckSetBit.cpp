// Check whether K-th bit is set or not
// Problem link:
// https://practice.geeksforgeeks.org/problems/check-whether-k-th-bit-is-set-or-not-1587115620/1?
// https://www.codingninjas.com/codestudio/problem-details/check-whether-k-th-bit-is-set-or-not_5026446

#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    bool checkKthBit(int n, int k)
    {
        int mask = 1 << k;
        return n & mask;
    }
};

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    long long n;
	    cin>>n;//input n
	    int k;
	    cin>>k;//bit number k
	    Solution obj;
	    if(obj.checkKthBit(n, k))
	        cout << "Yes" << endl;
	    else
	        cout << "No" << endl;
	}
	return 0;
}
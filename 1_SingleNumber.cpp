// Single Number
// Problem link:
// https://leetcode.com/problems/single-number/
// https://practice.geeksforgeeks.org/problems/single-number1014/1


// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
	int getSingle(int arr[], int n) {
	   int ans = 0;
	   for(int i = 0; i < n; i++){
	       ans ^= arr[i];
	   }
	   return ans;
	}
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getSingle(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

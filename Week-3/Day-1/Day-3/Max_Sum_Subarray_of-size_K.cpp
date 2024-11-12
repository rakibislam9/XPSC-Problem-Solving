//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    long long maximumSumSubarray(vector<int>& a, int k) {
        // code here
        int n = a.size(), l = 0, r = 0;
      long long ans = 0, sum = 0;
      while (r < n) {
         sum += a[r];
         if (r - l + 1 == k) {
            ans = max(ans, sum);
            sum -= a[l];
            l++, r++;
         }
         else {
            r++;
         }
      }
      return ans;
    }
};
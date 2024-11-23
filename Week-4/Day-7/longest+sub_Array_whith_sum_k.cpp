class Solution {
  public:
    int lenOfLongestSubarr(vector<int>& arr, int k) {
        // code here
        map<int, int> mp; 
        int Sum = 0;                      
        int ans = 0;                      
        
        for (int i = 0; i < arr.size(); i++) {
            Sum += arr[i];                
            
            if (Sum == k) {
                ans = max(ans, i + 1);
            }
            
            if (mp.find(Sum - k) != mp.end()) {
                ans = max(ans, i - mp[Sum - k]);
            }
            
            if (mp.find(Sum) == mp.end()) {
                mp[Sum] = i;
            }
        }
    
        return ans;
    }
};
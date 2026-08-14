class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n = s.size();
        int left =0;
        int maxLen =0;
        unordered_map<char,int>mp;

        for (int right=0 ; right<n ; right++){
           mp[s[right]]++;
           // occurences is twice
           while(mp[s[right]] > 2){
            mp[s[left]]--;
            left++;
           }
           maxLen = max(maxLen,right-left+1);
        }
        
        return maxLen;
    }
};
class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n = s.size();
        int start =0;
        int end =0;
        int maxLen=0;
        unordered_map<char,int>mp;

        while(end < n){
            mp[s[end]]++;
            
// frequency of that char should not more than 2 (jispe s[end] point kr rha hai)
            while(mp[s[end]] > 2){
                mp[s[start]]--;
                start++;
            }
            maxLen = max(maxLen,end-start+1);
            end++;
        }
        return maxLen;
    }
};
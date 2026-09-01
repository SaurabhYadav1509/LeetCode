class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.size();
        int freq[26] ={};
        for (int i=0; i < n/2; i++){
            freq[s[i]-'a']++;
        }
        
        string start = "";
        // build first part of the string
        for (int i=0; i<26; i++){
            while(freq[i]--) 
            start += char('a' + i);
        }

        string end = start;
        reverse(end.begin(),end.end());

        if (n % 2 == 0) return start + end;
        return start + s[n/2] + end;
    }
};
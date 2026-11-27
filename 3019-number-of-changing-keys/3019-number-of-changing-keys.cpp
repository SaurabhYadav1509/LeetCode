class Solution {
public:
    int countKeyChanges(string s) {
        int n = s.size();
        
        int count = 0;
        for (int i=0; i<n-1; i++){
           if (s[i+1] == s[i] || s[i+1] == toupper(s[i]) 
           || s[i+1] == tolower(s[i]))
           continue;
           else count++;
        }
        return count;
    }
};
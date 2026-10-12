class Solution {
public:
    int n;
    int t[1001][1001];
    
    bool predecessor(string& prev, string& curr) {
        int n1 = prev.length();
        int n2 = curr.length();
        
        if(n1 >= n2 || n2-n1 != 1)
            return false;
        
        int i = 0, j = 0;
        while(i < n1 && j < n2) {
            if(prev[i] == curr[j]) {
                i++;
            }
            j++;
        }
        return i==n1;
    }
    
    int lis(vector<string>& words, int prev, int curr) {
       if(curr == n)
           return 0;
        
        if(prev != -1 && t[prev][curr] != -1)
            return t[prev][curr];
        
        int take = 0;
        if(prev == -1 || predecessor(words[prev], words[curr]))
            take = 1 + lis(words, curr, curr+1);
        
        int skip = lis(words, prev, curr+1);
        
        if(prev != -1)
            t[prev][curr] =  max(take, skip);
        
        return max(take, skip);
            
    }
    
    static bool compare(string& s1, string& s2) {
        return s1.length() < s2.length();
    }
    
    int longestStrChain(vector<string>& words) {
        memset(t, -1, sizeof(t));
        n = words.size();
        sort(begin(words), end(words), compare);
         //You can select pairs in any order
        return lis(words, -1, 0);
    }
};
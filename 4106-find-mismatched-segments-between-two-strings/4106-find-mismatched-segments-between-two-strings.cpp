class Solution {
public:
    vector<vector<string>> findMismatchedSegments(string s1, string s2) {
        
        vector<vector<string>> ans;
        if (s1.size() != s2.size())
        return ans;

        int i = 0;
        int n = s1.size();

        while(i < n){
            if (s1[i] == s2[i]){
                i++;
                continue;
            }

            int start = i;
            while(i < n && s1[i] != s2[i]){
                i++;
            }

            string a = s1.substr(start, i-start);
            string b = s2.substr(start, i-start);

            ans.push_back({a,b});
        }
        return ans;
    }
};
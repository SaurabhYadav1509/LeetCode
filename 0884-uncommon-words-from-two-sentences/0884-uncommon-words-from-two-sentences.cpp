class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string,int>mp;
        string word;
        vector<string>words;
        string S = s1 + " " + s2;
        stringstream ss(S);

        while(ss >> word){
            words.push_back(word);
            mp[word]++;
        }
        vector<string>ans;
        for (string s : words){
            if (mp[s] == 1) ans.push_back(s);
        }
        
        return ans;
    }
};
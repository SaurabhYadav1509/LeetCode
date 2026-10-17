class Solution {
public:
    int numberOfSpecialChars(string word) {
        int n = word.size();
        vector<int>Up(26, 0);
        vector<int>Low(26, 0);

        for (int i=0 ; i<n; i++){
            char ch = word[i];
            if (ch >= 'A' && ch <= 'Z')
            Up[ch-'A']++;
        }

        for (int i=0; i<n; i++){
             char ch = word[i];
             if (ch >= 'a' && ch <= 'z')
             Low[ch - 'a']++;
        }

        int count = 0;
        for (int i=0; i<26; i++){
            if (Up[i] > 0  && Low[i] > 0)
            count++;
        }
        return count;
    }
};
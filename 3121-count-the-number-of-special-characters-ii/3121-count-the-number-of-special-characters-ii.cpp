class Solution {
public:
    int numberOfSpecialChars(string word) {
        int n = word.size();
        vector<int> low(26, -1);
        vector<int> up(26, -1);

// Last Occurence Check
        for (int i=0; i<n; i++){
            char ch = word[i];
            if (ch >= 'a' && ch <= 'z')
            {
                low[ch - 'a'] = i;
            }
        }

// First Occurence Check
        for (int i=0; i<n; i++){
            char ch = word[i];
            if ( (ch >= 'A' && ch <= 'Z') && up[ch - 'A'] == -1)
            {
                up[ch - 'A'] = i;
            }
        }
    
    int count = 0;
    for (int i=0; i<26; i++){
        if ( (low[i] != -1 && up[i] != -1) && (low[i] < up[i]))
        count++;
    }

   return count;
    }
};
class Solution {
public:
    bool detectCapitalUse(string word) {
        int n = word.size();
        int count = 0;

        for (auto ch : word){
          if (ch >= 'A' && ch <= 'Z') count++;
        }

        // if all capital or all small
        if (count == n || count ==0) return true;
        // if first letter is capital
        if ( count == 1 && word[0] >= 'A' && word[0] <= 'Z') return true;
        return false;
    }
};
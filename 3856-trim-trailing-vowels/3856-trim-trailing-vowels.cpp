class Solution {
public:
    string trimTrailingVowels(string s) {
        int n = s.size();
        int count=0;
        string ans="";
        for (int i=n-1; i >= 0 ; i--){
           if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i'
            || s[i] == 'o' || s[i] == 'u'){
                count++;
            }
            else break;
        }
        int rem = n - count;
        for (int i=0 ; i<rem ; i++){
            ans += s[i];
        }
        return ans;
    }
};
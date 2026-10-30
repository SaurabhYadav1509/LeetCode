class Solution {
public:

bool isPalindrome(string s){
    int i = 0;
    int l = s.size()-1;
    
    while(i < l){
        if (s[i] == s[l]){
            i++;
            l--;
        }
        else
        return false;
    }
    return true;
}
    string firstPalindrome(vector<string>& words) {
        int n = words.size();
        for (int i=0; i<n; i++){
            if (isPalindrome(words[i]))
            return words[i];
        }
        return "";
    }
};
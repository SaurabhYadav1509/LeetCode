class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.size();
        string start ="";
        string end ="";

        if (n % 2 == 0){
            for (int i=0; i<n/2 ;i++){
                start += s[i];
            }
            sort(start.begin(),start.end());
            end = start;
            reverse(end.begin(),end.end());
            return start+end; 
        }

        else{
            for (int i=0; i<n/2 ;i++){
                start += s[i];
            }
            sort(start.begin(),start.end());
            end = start;
            reverse(end.begin(),end.end());
            return start + s[n/2] + end;
        }
    }
};
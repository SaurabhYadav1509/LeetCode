class Solution {
public:
    int countRotations(string s, int k) {
        int n = s.size();
        string ans = s + s;
        int result=0;
        for(int start=0; start<n; start++){
            int count = 0;

            for (int i=start+1; i<(start+n); i++){
                if (ans[i] == ans[i-1]) count++;
            }
            
        if (count == k) result++;
        } 
        return result;
    }
};
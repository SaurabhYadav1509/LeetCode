class Solution {
public:
    int countRotations(string s, int k) {
        int n = s.size();
        int result =0;
        for (int r=0 ; r<n ; r++){
            string ans  = s.substr(r) + s.substr(0,r);

            int count = 0;
            for (int i=1; i<n; i++){
                if (ans[i] == ans[i-1]) count++;
            }
            if (count == k) result++;
        }
        return result;
    }
};
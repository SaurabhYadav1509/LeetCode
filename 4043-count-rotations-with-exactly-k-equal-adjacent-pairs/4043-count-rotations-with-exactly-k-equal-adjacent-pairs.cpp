class Solution {
public:
    int countRotations(string s, int k) {
        int n = s.size();
        int result =0;
        for (int r=0; r<n ; r++){
            string rotated = s.substr(r) + s.substr(0,r);
            
            int len = 0;
            for (int i=1; i<n ;i++){
              if (rotated[i] == rotated[i-1]) len++;
            }

            if (len == k) result++;
        }

        return result;
    }
};
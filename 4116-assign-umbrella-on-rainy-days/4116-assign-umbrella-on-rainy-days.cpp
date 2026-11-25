class Solution {
public:
    vector<string> assignUmbrella(vector<int>& rain) {
        int n = rain.size();
        int counta = 0;
        int countb = 0;

        vector<string> ans;

        for (int i=0; i<n; i++) {

            if (rain[i] == 0) {
                ans.push_back("None");
            }

            else if (i+1 < n && rain[i+1] == 1) {

                if (counta <= countb) {
                    counta++;
                    ans.push_back("Alice");
                }
                else {
                    countb++;
                    ans.push_back("Bob");
                }
            }

            else {
                countb++;
                ans.push_back("Bob");
            }
        }
        return ans;
    }
};
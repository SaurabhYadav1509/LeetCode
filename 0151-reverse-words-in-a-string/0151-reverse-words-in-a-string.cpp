
class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        vector<string> arr;

        while (ss >> word) {
            arr.push_back(word);
        }

        reverse(arr.begin(), arr.end());

        string ans = "";

        for (int i = 0; i < arr.size(); i++) {
            if (i > 0) ans += " ";
            ans += arr[i];
        }

        return ans;
    }
};

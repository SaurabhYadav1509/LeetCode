
class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        stack<string> st;

        string word = "";
        string ans = "";

        for (int i = 0; i < n; i++) {
            if (s[i] != ' ') {
                word += s[i];
            }
            
            else {
                if (word != "") {
                    st.push(word);
                    word = "";
                }
            }
        }

        // Push the last word
        if (word != "") {
            st.push(word);
        }

        while (!st.empty()) {
            ans += st.top();
            st.pop();

            if (!st.empty()) {
                ans += " ";
            }
        }

        return ans;
    }
};

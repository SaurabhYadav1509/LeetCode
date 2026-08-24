class Solution {
public:
    string removeOccurrences(string s, string part) {
        size_t idx = s.find(part);
        
        while (idx != string::npos) {
            s.erase(idx, part.size());

            idx = s.find(part);
        }

        return s;
    }
};
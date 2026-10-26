class Solution {
public:
    string minWindow(string s, string t) {
        int req = t.size();

        unordered_map<char, int>mp;
        for (auto x : t)
        mp[x]++;
        
        int len = INT_MAX;
        int start = 0;
        int l = 0;
        for (int i=0; i<s.size(); i++){
           char ch = s[i];
           if (mp.count(ch)){
            if (mp[ch] > 0)
            req--;

            mp[s[i]]--;
           }

           while(req == 0){

            if (len > (i-l+1)){
                start = l;
                len = i-l+1;
            }

// agar map mein wo element hai to jo delete hone wala hai
          if (mp.count(s[l])){
            mp[s[l]]++;

//uski frequency aur req dono bada do
            if (mp[s[l]] > 0)
            req++;
          }
            l++;
           }
        }
    if (len == INT_MAX)
    return "";

    else 
    return s.substr(start,len);
    }
};
class Solution {
public:
    int minOperations(string s) {
        int n = s.size();

        string sorted = s;
        sort(sorted.begin(), sorted.end());
 
        if (s == sorted)
        return 0;  
              
     // not comparable   
        if (n == 2) return -1;
        
        char mini = *min_element(s.begin(), s.end());
        char maxi = *max_element(s.begin(), s.end());

    // if min char at start or max char is at end
        if (s[0] == mini || maxi == s[n-1])
        return 1;

    // in the middle
        for (int i=1; i<n-1; i++){
            if (s[i] == mini || s[i] == maxi)
            return 2;
        }
    // remaining cases
        return 3;
    }
};
class Solution {
public:

int n;
int arr[1001][1001];

static bool compare(string w1, string w2){
    return w1.size() < w2.size();
}

bool isPred(string w1, string w2){
    int n1 = w1.length();
    int n2 = w2.length();

    if(n1 >= n2 || abs(n1- n2) != 1)
    return false;

    int i=0;
    int j=0;

    while (i < n1 && j < n2){
        if (w1[i] == w2[j]){
            i++;
        }
        j++;
    }
    return i == n1;
}

int solve(vector<string> &words, int prev, int curr){
   if (curr == n)
   return 0;

   if (arr[prev+1][curr] != -1)
   return arr[prev+1][curr];

   int take = 0, skip =0;

   if (prev == -1 || isPred(words[prev], words[curr])){
    take = 1 + solve(words, curr, curr+1);
   }

   skip = solve(words, prev, curr+1);

   arr[prev+1][curr] = max(take, skip);

   return max(take, skip);
}

    int longestStrChain(vector<string>& words) {
        n = words.size();
        memset(arr, -1, sizeof(arr));

        sort(words.begin(), words.end(), compare);

        return solve(words, -1, 0);
    }
};
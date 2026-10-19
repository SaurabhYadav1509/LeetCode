class Solution {
public:

int n;
int arr[20001];
unordered_map<int, int>mp;
vector<int> value;

int solve(int i){
    if (i >= n)
    return 0;

    if (arr[i] != -1)
    return arr[i];
     
    int skip = solve(i+1);
    
    int point = value[i]*mp[value[i]];
    int next = i+1;

    if (i+1 < value.size() && value[i+1] == value[i]+1){
       next = i+2;
    }
    
    int take = point + solve(next);

    return arr[i] = max(take, skip);
}

    int deleteAndEarn(vector<int>& nums) {
    
    memset(arr, -1, sizeof(arr));

    for (auto x : nums)
    mp[x]++;

    for (auto &x : mp)
    value.push_back(x.first); 
    n = value.size();

    sort(value.begin(), value.end());
 
    return solve(0);

    }
};
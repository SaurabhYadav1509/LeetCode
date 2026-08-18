class Solution {
public:
typedef pair<int,int>pi;
    int largestInteger(vector<int>& nums, int k) {
    int n = nums.size();
    unordered_map<int,int>mp;
     
    int i=0;
    int j=0;
    for (int i=0;i<=n-k;i++){
        unordered_set<int>st;
        for (int j=i;j<i+k;j++){
           st.insert(nums[j]);
        }
       for (auto x : st) mp[x]++;
    }

    priority_queue<pi,vector<pi>,greater<pi>>pq;
    for (auto x : mp){
        int ele = x.first;
        int count = x.second;

        if (count == 1) pq.push({ele,count});
    }

    if (pq.empty()) return -1;
    
    int ans =-1;

    while(!pq.empty()){
        ans = pq.top().first;
        pq.pop();
    }

    return ans;
    }
};
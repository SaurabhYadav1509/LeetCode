class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        unordered_map<int,int>mp;
        
        for(int i=0;i<n;i++){
            if(mp.find(numbers[i])==mp.end()){//handles duplicate
                mp[numbers[i]]=i;
            }
        }
    vector<int>ans;
        for(int i=0;i<n;i++){
            int b = target - numbers[i];
            if(mp.find(b)!=mp.end() && mp[b]!=i){
                ans.push_back(i+1);
                ans.push_back(mp[b]+1);
                sort(ans.begin(),ans.end());
                return ans;
            }
        }
        return {-1};

    }
};
class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int, int>mp;
        int n = fruits.size();
    int ans =0;
    int l =0;
    int k = 2;
for (int i=0; i<n; i++){
mp[fruits[i] ]++;

while(mp.size() > k){
mp[fruits [l]] --;

if (mp[fruits [l]] == 0)
mp.erase(fruits[l]);

l++;
}
 
ans = max(ans,i-l+1);

}
return ans;
    }
};
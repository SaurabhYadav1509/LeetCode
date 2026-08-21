class Solution {
public:
typedef pair<int,int>pi;
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
       int n  = arr.size();

       vector<int>ans;
       priority_queue<pi> pq;
      
       for (auto y : arr){
        int ele = y;
        int dist = abs(ele - x);

        pq.push({dist,ele});
        if (pq.size() > k) pq.pop();
       }

       while(!pq.empty()){
        ans.push_back(pq.top().second);
        pq.pop();
       }

       sort(ans.begin(),ans.end());
       return ans;
    }
};
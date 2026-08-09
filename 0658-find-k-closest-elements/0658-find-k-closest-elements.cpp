class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
        // pair <ele,dist>  map fails for the dupliacte elements
        // unordered_map<int,int>mp;
        // for (auto ele : arr){
        //     mp[ele] = abs(ele-x);
        // }


        // pq => <dist,ele>
        typedef pair<int,int> pi;
        priority_queue<pi>pq;
        for (auto ele : arr){
            int dist = abs(ele-x);
            pq.push({dist,ele});

            if (pq.size()>k) pq.pop();
        }

        vector<int>ans;
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
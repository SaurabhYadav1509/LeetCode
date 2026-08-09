class Solution {
public:
    // pair stores <int and a 1d vector>
    typedef pair<int,vector<int>> piv;
    vector<vector<int>> kClosest(vector<vector<int>>& arr, int k) {

        priority_queue<piv>pq;
        for (vector<int> v : arr){
            int x = v[0];
            int y = v[1];
            // if square root is greater then sq will also be greater
            int dist = x*x + y*y;
            pq.push({dist,v});
            if (pq.size()>k) pq.pop();
        }
        // push the vectors in 2d vector
        vector<vector<int>> ans;
        while(!pq.empty()){
              ans.push_back(pq.top().second);
              pq.pop();
        }
        return ans;
    }
};
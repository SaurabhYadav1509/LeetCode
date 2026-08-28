class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {

        priority_queue<int,vector<int>,greater<int>>pq;
        for (auto x : nums){
            pq.push(x);
        }

        // operation perform on minimum element
        while(k--){
            int top = pq.top();
            pq.pop();
            pq.push(top*(-1));
        }
        
        int sum = 0;
        while(!pq.empty()){
            sum += pq.top();
            pq.pop();
        }
        return sum;
    }
};
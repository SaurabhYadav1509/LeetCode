class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();
        
        int total = 0;

        for (int i=0; i<n; i++){
            vector<int> temp;
            int sum =0;
        for (int j=i; j<n; j++){
            
        temp.push_back(arr[j]);
        sum += arr[j];

            if (temp.size() % 2 != 0)
            total += sum;

        }
        }
        return total;
    }
};
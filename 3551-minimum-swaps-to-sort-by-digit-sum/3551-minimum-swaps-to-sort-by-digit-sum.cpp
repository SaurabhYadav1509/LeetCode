class Solution {
public:
    static int sum(int n) {
        int s = 0;

        while (n) {
            s += n % 10;
            n /= 10;
        }

        return s;
    }

    static bool compare(int a, int b) {
        int n1 = sum(a);
        int n2 = sum(b);

        if (n1 == n2)
            return a < b;

        return n1 < n2;
    }

    int minSwaps(vector<int>& nums) {
        int n = nums.size();

        unordered_map<int, int> valToIdx;

        for (int i = 0; i < n; i++) {
            valToIdx[nums[i]] = i;
        }

        vector<int> afterSorted = nums;

        sort(afterSorted.begin(), afterSorted.end(), compare);

        int swapCount = 0;

        for (int i = 0; i < n; i++) {
            int expectedVal = afterSorted[i];
            int currVal = nums[i];

            if (expectedVal == currVal)
                continue;

            int idx = valToIdx[expectedVal];

            swap(nums[i], nums[idx]);

            valToIdx[currVal] = idx;
            valToIdx[expectedVal] = i;

            swapCount++;
        }

        return swapCount;
    }
};
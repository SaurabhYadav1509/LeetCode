class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int ans = INT_MAX;

        for (int i=0; i<n; i++) {
            if (nums[i] == 0) {
                int a = 0, b = 0;

                for (int j=0; j<n; j++) {
                    if (nums[(i+j) % n] != j) {
                        a++;
                    }

                    if (nums[(i-j+n) % n] != j) {
                        b++;
                    }
                }

                if (a == 0) {
                    ans = min(ans, min(i, n-i+2));
                }

                if (b == 0) {
                    ans = min(ans, 1 + min(i+1, n-i-1));
                }

                break;
            }
        }

        return ans == INT_MAX ? -1 : ans;
    }
};

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {

        if (nums.size() == 1)
            return nums[0];

        int start = 0;
        int end = nums.size() - 1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            // First element
            if (mid == 0) {
                if (nums[mid] != nums[mid + 1])
                    return nums[mid];

                start = mid + 1;
                continue;
            }

            // Last element
            if (mid == nums.size() - 1) {
                if (nums[mid] != nums[mid - 1])
                    return nums[mid];

                end = mid - 1;
                continue;
            }

            // Single element
            if (nums[mid - 1] != nums[mid] &&
                nums[mid] != nums[mid + 1]) {
                return nums[mid];
            }

            // Even index
            if (mid % 2 == 0) {
                if (nums[mid - 1] == nums[mid])
                    end = mid - 1;
                else
                    start = mid + 1;
            }

            // Odd index
            else {
                if (nums[mid - 1] == nums[mid])
                    start = mid + 1;
                else
                    end = mid - 1;
            }
        }

        return -1;
    }
};
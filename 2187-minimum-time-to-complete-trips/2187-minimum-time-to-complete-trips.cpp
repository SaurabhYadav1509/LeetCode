class Solution {
public:

   bool isValid(vector<int>& time, long long totalTrips, long long target) {
        long long trips = 0;
        for (int i = 0; i < time.size(); i++) {
            trips += target / time[i];
            // We already have enough trips
            if (trips >= totalTrips)
                return true;
        }
        return false;
    }

    long long minimumTime(vector<int>& time, int totalTrips) {
         long long start = 1;
        long long minTime = *min_element(time.begin(), time.end());
        long long end = minTime * 1LL * totalTrips;
        long long ans = -1;

        while (start <= end) {
            long long mid = start + (end - start) / 2;
            if (isValid(time, totalTrips, mid)) {
                ans = mid;
                // Try to find an even smaller time
                end = mid - 1;
            }
            else {
                // Need more time
                start = mid + 1;
            }
        }

        return ans;       
    }
};
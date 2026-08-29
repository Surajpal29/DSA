class Solution {
public:
    vector<int> findSubarray(vector<int>& arr) {
        int n = arr.size();

        long long maxSum = -1;
        int maxStart = -1, maxLen = 0;

        long long currSum = 0;
        int currStart = 0, currLen = 0;

        for (int i = 0; i < n; i++) {
            if (arr[i] >= 0) {
                if (currLen == 0) currStart = i; // Mark start of continuous segment
                currSum += arr[i];
                currLen++;

                // Compare with best segment seen so far
                if (currSum > maxSum || (currSum == maxSum && currLen > maxLen)) {
                    maxSum = currSum;
                    maxStart = currStart;
                    maxLen = currLen;
                }
            } else {
                // Reset segment trackers on encountering negative number
                currSum = 0;
                currLen = 0;
            }
        }

        // If no non-negative element was found
        if (maxStart == -1) return {-1};

        return vector<int>(arr.begin() + maxStart, arr.begin() + maxStart + maxLen);
    }
};
#include <vector>
#include <numeric>
#include <algorithm>

class Solution {
public:
    // Helper function to check if it's possible to paint all boards 
    // within 'maxTime' using at most 'k' painters.
    bool isPossible(std::vector<int>& arr, int k, long long maxTime) {
        int paintersUsed = 1;
        long long currentBoardLengthSum = 0;
        
        for (int i = 0; i < arr.size(); i++) {
            if (currentBoardLengthSum + arr[i] <= maxTime) {
                currentBoardLengthSum += arr[i];
            } else {
                // Assign to a new painter
                paintersUsed++;
                if (paintersUsed > k) {
                    return false;
                }
                currentBoardLengthSum = arr[i];
            }
        }
        return true;
    }

    int minTime(std::vector<int>& arr, int k) {
        int n = arr.size();
        
        // 'low' must be the max element (a painter must be able to paint the largest board)
        long long low = *std::max_element(arr.begin(), arr.end());
        
        // 'high' is the sum of all elements (if 1 painter paints everything)
        long long high = std::accumulate(arr.begin(), arr.end(), 0LL);
        
        long long ans = high;
        
        while (low <= high) {
            long long mid = low + (high - low) / 2;
            
            if (isPossible(arr, k, mid)) {
                ans = mid;        // 'mid' is a feasible time, try to find a smaller maximum
                high = mid - 1;
            } else {
                low = mid + 1;    // 'mid' is too small, increase the time limit
            }
        }
        
        return ans;
    }
};
#include <vector>
#include <unordered_map>

class Solution {
public:
    long subarrayXor(std::vector<int> &arr, int k) {
        long ans = 0;
        int currentXor = 0;
        // Map to store frequency of prefix XORs
        std::unordered_map<int, int> prefixFreq;

        // Base case: A prefix XOR of 0 has occurred once (initially)
        prefixFreq[0] = 1;

        for (int val : arr) {
            currentXor ^= val;

            // Calculate what we need to find to make the XOR equal to k
            int target = currentXor ^ k;

            // If target exists in our map, add its frequency to our answer
            if (prefixFreq.find(target) != prefixFreq.end()) {
                ans += prefixFreq[target];
            }

            // Store current prefix XOR in the map
            prefixFreq[currentXor]++;
        }

        return ans;
    }
};

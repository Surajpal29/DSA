class Solution {
public:
    bool isProduct(vector<int>& arr, long long target) {
        unordered_set<long long> seen;

        for (long long x : arr) {
            // Case 1: Handle x = 0
            if (x == 0) {
                if (target == 0 && seen.count(0)) return true;
                seen.insert(x);
                continue;
            }

            // Case 2: Check exact divisibility before lookup
            if (target % x == 0) {
                long long required = target / x;
                if (seen.count(required)) return true;
            }

            seen.insert(x);
        }

        return false;
    }
};
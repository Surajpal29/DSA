class Solution {
public:
    string findLongestWord(string &s, vector<string> &d) {
        // Store all indices for each character 'a' through 'z' in s
        vector<vector<int>> pos(26);
        for (int i = 0; i < s.size(); i++) {
            pos[s[i] - 'a'].push_back(i);
        }

        string res = "";

        for (const string &word : d) {
            // Optimization: Skip if word is shorter than current best
            // or if it's equal in length but lexicographically larger/equal
            if (word.size() < res.size() || (word.size() == res.size() && word >= res)) {
                continue;
            }

            int current_idx = -1;
            bool is_valid = true;

            for (char c : word) {
                const auto &indices = pos[c - 'a'];

                // Find the first index in s for character 'c' that is > current_idx
                auto it = upper_bound(indices.begin(), indices.end(), current_idx);

                if (it == indices.end()) {
                    is_valid = false;
                    break;
                }

                current_idx = *it;
            }

            if (is_valid) {
                res = word;
            }
        }

        return res;
    }
};
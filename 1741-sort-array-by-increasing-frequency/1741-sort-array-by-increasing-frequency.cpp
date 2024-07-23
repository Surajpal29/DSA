class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
       unordered_map<int, int> frequencyMap;
        for (int num : nums) {
            frequencyMap[num]++;
        }

        
        vector<pair<int, int>> freqVec(frequencyMap.begin(), frequencyMap.end());


        sort(freqVec.begin(), freqVec.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.second == b.second ? a.first > b.first : a.second < b.second;
        });


        vector<int> ans;
        for (const auto& p : freqVec) {
            ans.insert(ans.end(), p.second, p.first);
        }

        return ans;
    }
};
class Solution {
public:
    vector<int> successfulPairs(vector<int>& s, vector<int>& p, long long t) {
      sort(p.begin(),p.end());
        vector<int> ans; 
        int x; long long y;
        for(auto &it:s) {
            y = t / it;
            x = p.end() - lower_bound(p.begin(),p.end(),y * it >= t ? y : y + 1);
            ans.push_back(x);
        }
        return ans;
    }
};
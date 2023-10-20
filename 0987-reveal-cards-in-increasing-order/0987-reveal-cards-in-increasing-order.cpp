class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        vector<int>ans;
        deque<int>dq;
        sort(deck.rbegin(),deck.rend());
        dq.push_back(deck[0]);
        for(int i=1;i<deck.size();i++){
            int a=dq.front();
            dq.pop_front();
            dq.push_back(a);
            dq.push_back(deck[i]);
        }
        while(!dq.empty()){
            ans.push_back(dq.back());
            dq.pop_back();
        }
        return ans;
    }
};
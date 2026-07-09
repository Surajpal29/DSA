class Solution {
  public:
    void helper(int ind,string s,vector<string>& res,string &curr){
        
        if(ind>=s.size()){
            res.push_back(curr);
            return;
        }
        
        curr+=s[ind];
        helper(ind+1,s,res,curr);
        curr.pop_back();
        helper(ind+1,s,res,curr);
    }
    vector<string> powerSet(string s) {
        // code here
        vector<string>res;
        string curr;
        helper(0,s,res,curr);
        return res;
    }
};

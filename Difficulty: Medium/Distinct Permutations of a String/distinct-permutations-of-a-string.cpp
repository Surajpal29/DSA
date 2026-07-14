class Solution {
  public:
    void helper(int ind,string& s,vector<string>& res){
        if(s.length()==ind){
            res.push_back(s);
            return;
        } 
        
        bool alpha[26]={false};
        
        for(int i=ind;i<s.length();i++){
            if(alpha[s[i]-'A']) continue;
            alpha[s[i]-'A']=true;
            
            swap(s[i],s[ind]);
            
            helper(ind+1,s,res);
            
            swap(s[i],s[ind]);
        }
    }
    vector<string> findPermutation(string &s) {
        // Code here
        vector<string>res;
        helper(0,s,res);
        return res;
    }
};

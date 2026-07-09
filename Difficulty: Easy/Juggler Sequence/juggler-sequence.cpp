class Solution {
  public:
    void helper(int ind,long long n, vector<long long>&res){
        
        if(res[ind]==1) return;
        
        if(res[ind]%2==0) res.push_back(pow(res[ind],0.5));
        else res.push_back(pow(res[ind],1.5));
        
        helper(ind+1,n,res);
    }
    vector<long long> jugglerSequence(long long n) {
        // code here
        vector<long long>res;
        res.push_back(n);
        helper(0,n,res);
        return res;
    }
};
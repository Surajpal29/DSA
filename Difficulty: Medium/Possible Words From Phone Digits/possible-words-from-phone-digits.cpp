class Solution {
  public:
    void helper(int index,vector<int>& arr,string &curr,vector<string>& padres,vector<string>& res){
        
        if(index==arr.size()){
            res.push_back(curr);
            return;
        }
        
        if(arr[index]<2 || arr[index]>9){
            helper(index+1,arr,curr,padres,res);
            return;
        } 
        
        for(auto it:padres[arr[index]]){
            curr+=it;
            helper(index+1,arr,curr,padres,res);
            curr.pop_back();
        }
        
        
    }
    vector<string> possibleWords(vector<int> &arr) {
        // code here
        vector<string>res;
        vector<string>padres={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        string curr="";
        helper(0,arr,curr,padres,res);
        return res;
    }
};
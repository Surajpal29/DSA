class Solution {
  public:
    int transform(string &s1, string &s2) {
        // code here
        int n=s1.size(),m=s2.size();
        
        if(n!=m) return -1;
        
        unordered_map<char,int>ump;
        
        for(int i;i<m;i++){
            ump[s2[i]]++;
        }
        
        for(int i=0;i<m;i++){
            if(ump.find(s1[i])!=ump.end()){
                ump[s1[i]]--;
                if(ump[s1[i]]==0) ump.erase(s1[i]);
            }
            else{
                return -1;
            }
        }
        
        int i=n-1,j=m-1;
        
        while(i>=0 && j>=0){
            if(s1[i]==s2[j]){
                i--;
                j--;
            }
            else{
              
                i--;
                
            }
        }
        return j-i;
    }
};

class Solution {
  public:
  void josephus(int ind, vector<int>&vect,int k,int &ans){
      if(vect.size()==1) {
          ans=vect[0];
          return;
      }
      ind=(ind+k)%vect.size();
      vect.erase(vect.begin()+ind);
      josephus(ind,vect,k,ans);
  }
    int josephus(int n, int k) {
        // code here
        vector<int>vect;
        
        for(int i=1;i<=n;i++) vect.push_back(i);
        
        k=k-1;
        int ind=0;
        int ans=-1;
        josephus(ind,vect,k,ans);
        return ans;
    }
};
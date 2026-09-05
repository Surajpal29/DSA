class Solution {
  public:
    int longestSubseq(vector<int>& arr) {
        // code here
        int ans=0;
        unordered_map<int,int>umap;
        
        for(int it:arr){
            int next=it+1;
            int prev=it-1;
            
            int seq1=0;
            int seq2=0;
            
            if(umap.count(next)) seq1=umap[next];
            
            if(umap.count(prev)) seq2=umap[prev];
            
            umap[it]=max(umap[it],1+max(seq1,seq2));
            ans=max(ans,umap[it]);
        }
        return ans;
    }
};
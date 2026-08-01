class Solution {
  public:
    int sqNum(int n) {
        // code here
        vector<bool>square(n+1,false);
        
        int cnt=0;
        
        for(int i=2;i<=n;i++){
            int a=i*i;
            for(int j=a;j<=n;j+=a){
                if(j%a==0 && square[j]==0){
                    cnt++;
                    square[j]=1;
                }
            }
        }
        return cnt;
    }
};
class Solution {
  public:
    int pairCount(int x, int y) {
        // code here
        int cnt=0;
        int z=x*y;
        int a1=sqrt(z);
        for(int i=1;i<=a1;i++){
            
            if(z%i==0){
                int b =z/i;
                int c=gcd(i,b);
                if(c==x && (z/c)==y){
                    cnt++;
                    if(b!=i) cnt++;
                }
            }
        }
        return cnt;
    }
};
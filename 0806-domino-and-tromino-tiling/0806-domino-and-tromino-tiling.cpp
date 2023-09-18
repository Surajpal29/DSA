class Solution {
public:
    int numTilings(int n) {
        int a=0,b=1,c=1,next,mod=1e9+7;
        while(--n){
            next=((c*2)%mod+a)%mod;
            a=b;
            b=c;
            c=next;
        }
        return c;
    }
};
class Solution {
public:
    int tribonacci(int n) {
      if(n==1 || n==2) return 1;
      if(n==0) return 0;
      int a=0,b=1,c=1,val=0;
      for(int i=3;i<=n;i++){
          val=a+b+c;
          a=b;
          b=c;
          c=val;
      }
      return val;
    }
};
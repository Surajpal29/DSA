class Solution {
  public:
    int mthHalf(int n, int m) {
        // code here
       int first=0;
       int temp=n;
       for(int i=1;i<m;i++){
           first=temp/2;
           temp=first;
       }
       return temp;
    }
};
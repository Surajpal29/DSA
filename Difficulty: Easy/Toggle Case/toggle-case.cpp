class Solution {
  public:
    string toggleCase(string &s) {
        // code here
        int n=s.length();
        for(int i=0;i<n;i++){
            if(islower(s[i])) s[i]=toupper(s[i]);
            else s[i]=tolower(s[i]);
        }
        return s;
    }
};
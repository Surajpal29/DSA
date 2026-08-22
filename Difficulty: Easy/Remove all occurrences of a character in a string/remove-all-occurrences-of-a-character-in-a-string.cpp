class Solution {
  public:
    // Function to remove all occurrences of the character from the string
    void removeCharacter(string &s, char c) {
        // code here
        string res;
        for(int i=0;i<s.length();i++){
            if(s[i]==c) continue;
            else res+=s[i];
        }
        s=res;
        return;
    }
};
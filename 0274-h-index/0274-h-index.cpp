class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(),citations.end());
        reverse(citations.begin(),citations.end());
        int res=0;
        for(int i=0;i<citations.size();i++){
            if(i+1<=citations[i]) res=i+1;
        }
        return res;
    }
};
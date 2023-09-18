class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int previous=0;
        sort(intervals.begin(),intervals.end());
        int ans=0;
        for(int current=1;current<intervals.size();current++){
            if(intervals[current][0]<intervals[previous][1]){
                ans++;
                if(intervals[current][1]<=intervals[previous][1])
                    previous=current;
            }else{
                previous=current;
            }
        }
        return ans;
    }
};
class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
         // Using a min heap to store pairs of the sum of soldiers and their respective row indices
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<>>minheap;
         // Calculate the sum of soldiers for each row and store in the min heap
        for(int row=0;row<mat.size();row++){
            int soldierCount=findSoldierCount(mat[row]);
            minheap.push({soldierCount,row});
        }
        // Extract the k weakest row indices
        vector<int>weakestRow;
        while(k--){
            weakestRow.push_back(minheap.top().second);
            minheap.pop();
        }return weakestRow;
    }
    int findSoldierCount(vector<int>&row){
        int left=0,right=row.size()-1;
        // Perform binary search to find the count of soldiers
        while(left<=right){
            int mid=(left+right)/2;
            if(row[mid]==1) left=mid+1;
            else right=mid-1;
        }
        return left;
    }
};
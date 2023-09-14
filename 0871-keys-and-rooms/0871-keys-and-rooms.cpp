class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        vector<bool>visited(n,0);
        queue<int>q;
        q.push(0);
        visited[0]=1;
        while(!q.empty()){
            int room=q.front();
            q.pop();
            for(auto key:rooms[room]){
                if(!visited[key]){
                    visited[key]=1;
                    q.push(key);
                }
            }
        }
        for(auto x:visited){
            if(!x){
                return 0;
            }
        }
        return 1;
    }
};
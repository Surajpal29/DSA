class Solution {
public:
    bool DfsRec(int s,vector<bool>&visited,vector<bool>&currVisited,vector<int>adj[]){
        visited[s]=1;
        currVisited[s]=1;

        vector<int>data=adj[s];
        for(auto x:data){
            if(!visited[x]){
                if(DfsRec(x,visited,currVisited,adj)) return true;
            }
            else if(visited[x] && currVisited[x]) return true;
        }
        currVisited[s]=0;
        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<bool>visited(numCourses,0),currVisited(numCourses,0);

        vector<int>adj[numCourses];
        for(auto x:prerequisites){
            vector<int>data=x;
            int a=data[0];
            int b=data[1];
            adj[a].push_back(b);
        }
        for(int i=0;i<numCourses;i++){
            if(!visited[i]){
                if(DfsRec(i,visited,currVisited,adj)) return false;
            }
        }
        return true;
    }
};
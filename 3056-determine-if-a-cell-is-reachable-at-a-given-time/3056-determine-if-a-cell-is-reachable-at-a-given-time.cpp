class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        int xdist=abs(sx-fx);
        int ydist=abs(sy-fy);

        int mindist=min(xdist,ydist)+abs(ydist-xdist);

        if(mindist==0) return t!=1;

        return t>=mindist;
    }
};
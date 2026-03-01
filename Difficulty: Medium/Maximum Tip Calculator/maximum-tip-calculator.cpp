
class Solution {
  public:
    long long maxTip(int n, int x, int y, vector<int> &arr, vector<int> &brr) {
        // code her
        
        vector<pair<int, int>> tips;
        
        long long ans=0;
        for(int i=0 ; i<n ; i++){
            tips.push_back(make_pair(arr[i], brr[i]));
        }
        
        sort(tips.begin(), tips.end(), [](pair<int, int> p1, pair<int, int> p2 ){
            
            return abs(p1.first - p1.second) > abs(p2.first - p2.second);
            
        });
        
        for( auto i: tips){
            if(x==0){
                y--;
                ans+=i.second;
            }
            else if(y==0){
                x--;
                ans+=i.first;
            }
            else if(i.first>=i.second){
                x--;
                ans+=i.first;
            }
            
            else{
                y--;
                ans+=i.second;
            }
            
        }
        return ans;
        
    }
};

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
	int minSwaps(vector<int>&nums)
	{
	    // Code here
	    int n=nums.size();
	    vector<pair<int,int>>v;
	    for(int i=0;i<n;i++){
	        v.push_back({nums[i],i});
	    }
	    int swaps=0;
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++){
            pair<int,int>p=v[i];
            int value=p.first;
            int index=p.second;
            if(i!=index){
                swaps++;
                swap(v[i],v[index]);
                i--;
            }
        }
        return swaps;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution obj;
		int ans = obj.minSwaps(nums);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends
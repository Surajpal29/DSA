//{ Driver Code Starts
#include <iostream>
#include <map>
#include <algorithm>
#include <cstdlib>
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        // Your code here
        // Return the string containing the name and an integer
        // representing the number of votes the winning candidate got
        map<string,int>m;
        
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        
        int maxi=INT_MIN;
        for(auto i:m){
            if(i.second>maxi){
                maxi=i.second;
            }
        }
        
        vector<string>v;
        
        for(auto i:m){
            if(i.second==maxi){
                v.push_back(i.first);
            }
        }
        
        sort(v.begin(),v.end());
        
        string t=v[0];
        int len=t.length();
        string y=to_string(maxi);
        
        vector<string>o;
        
        o.push_back(t);
        o.push_back(y);
        return o;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        
        
        int n;
        cin>>n;
        
        string arr[n];
        
        for (int i=0;i<n;i++)
        cin>>arr[i];
        Solution obj;
        vector<string> result = obj.winner(arr,n);
        
        cout<<result[0] << " " << result[1] << endl;
    }
    return 0;
}

// } Driver Code Ends
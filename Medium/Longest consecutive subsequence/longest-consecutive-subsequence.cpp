//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
    int cnt=1;
    priority_queue<int,vector<int>,greater<int>>pq;
    
    for(int i=0;i<N;i++) pq.push(arr[i]);
    
    int temp=pq.top();
    pq.pop();
    
    int ans=1;
    
    while(!pq.empty()){
        int temp2=pq.top();
        pq.pop();
        
        if(temp2==(temp+1)) cnt++;
        else if(temp2!=temp){
            ans=max(ans,cnt);
            cnt=1;
        }
        temp=temp2;
    }
    return max(ans,cnt);
     
    }
};

//{ Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
// } Driver Code Ends
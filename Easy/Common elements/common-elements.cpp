//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:    
       void findelement(int A[],int B[],int temp[],int n,int m,int& k){
           int i=0,j=0;
           while(i<n && j<m){
               if(A[i]<B[j]) i++;
               else if(A[i]>B[j]) j++;
               else{
                   temp[k]=A[i];
                   i++;
                   j++;
                   k++;
               }
           }
       }
       void findelement(int A[],int B[],vector<int>&ans,int n,int m){
           int i=0,j=0;
           while(i<n && j<m){
               if(A[i]<B[j]) i++;
               else if(A[i]>B[j]) j++;
               else{
                   ans.push_back(A[i]);
                   i++;
                   j++;
               }
           }
       }
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            int temp[200000];
            int k=0;
            findelement(A,B,temp,n1,n2,k);
            vector<int>ans;
            int tempsize=k;
            k=0;
            findelement(C,temp,ans,n3,tempsize);
            set<int>s;
            for(int i=0;i<ans.size();i++) s.insert(ans[i]);
            vector <int> res;
            for(auto x:s){
                res.push_back(x);
            }
            return res;
        }

};

//{ Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}
// } Driver Code Ends
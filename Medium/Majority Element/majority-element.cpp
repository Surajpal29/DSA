//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        
        
        //moores voting algorithm
        // step 1 we find thw candidate which is majority in array
        int cnt=1,res=0;
        for(int i=0;i<size;i++){
            if(a[res]==a[i]) cnt++;
            else cnt--;
            if(cnt==0){
                cnt=1;
                res=i;
            }
        }
        // step 2 we check wether the candidate is in majority or not?
        cnt=0;
        for(int i=0;i<size;i++){
            if(a[res]==a[i]) cnt++;
        }
        if(cnt<=(size/2)) 
            return -1;
        return a[res];
        
    }
};

//{ Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}

// } Driver Code Ends
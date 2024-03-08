//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	bool sameFreq(string s)
	{
	    // code here 
	     unordered_map<char,int>mp1,mp2;
        for(int i=0;i<s.length();i++){
            mp1[s[i]]++;
            mp2[s[i]]++;
            
        }
        int maxi=0;
        for(auto it:mp1){
            maxi=max(maxi,it.second);
        }
        if(mp1.size()==s.length()){
            return true;
        }
        int count=0;
        for(auto it:mp1){
            if(it.second==maxi){
                mp1[it.first]--;
                break;
            }
        }
        bool isval=true;
        for(auto it:mp1){
            if(it.second!=maxi-1){
                isval=false;
                break;
            }
        }
        bool isfir=true;
        for(auto it:mp2){
            if(it.second<maxi){
                mp2[it.first]--;
                if(mp2[it.first]==0){
                    mp2.erase(it.first);
                }
                break;
            }
        }
        for(auto it:mp2){
            if(it.second!=maxi){
                isfir=false;
                break;
            }
        }
        
       
       return isfir||isval;
	}
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.sameFreq(s)<<endl;
    }
}



// } Driver Code Ends
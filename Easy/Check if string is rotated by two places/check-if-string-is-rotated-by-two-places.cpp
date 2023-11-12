//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        // Your code here
         if(str1.size()!=str2.size()){
            return 0;
        }
        
        string sf="";
        string se="";
        
        for(int i=2;i<str1.size();i++){
            sf+=str1[i];
            se+=str1[str1.size()-i-1];
        }
        reverse(se.begin(),se.end());
        
        string f2=str1.substr(0,2);
        string l2=str1.substr(str1.size()-2);
        if(sf+f2==str2){
            return 1;
        }
       else if(l2+se==str2){
           return 1;
           
       }
       else{
           return 0;
       }
    }

};


//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}

// } Driver Code Ends
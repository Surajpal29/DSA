//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
        static const int BITS=16;
        vector <int> rotate (int n, int d)
        {
            //code here.
              // Ensure d is within 0 to 15, since 16 rotations mean the number is unchanged
            d=d%BITS;
            int leftrotate=(n<<d)|(n>>(BITS-d));
            int rightrotate=(n>>d)|(n<<(BITS-d));
            
               // To ensure only the lower 16 bits are considered
            int mask=(1<<BITS)-1;
            
            leftrotate&=mask;
            rightrotate &=mask;
            
            return {leftrotate,rightrotate};
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        
        int n, d; cin >> n >> d;
        Solution ob;
        vector <int> res = ob.rotate (n, d);
        cout << res[0] << endl << res[1] << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends
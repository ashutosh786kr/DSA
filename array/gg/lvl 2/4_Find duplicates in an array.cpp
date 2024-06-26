/*--------------------------------------------------------------------------------------------------------------------------------------
Given an array a[] of size N which contains elements from 0 to N-1, you need to find all the elements occurring more than once in the given array.

Example 1:

Input:
N = 4
a[] = {0,3,1,2}
Output: -1
Explanation: N=4 and all elements from 0
to (N-1 = 3) are present in the given
array. Therefore output is -1
----------------------------------------------------------------------------------------------------------------------------------------*/


#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        vector<int> a;
        vector<int> b;
        set<int> dup;
        int k=0;
        
        for(int i=0 ; i<n ; i++)
        a.push_back(arr[i]);
        
        sort(a.begin() , a.end());
        
        for(int i=0 ; i<n ; i++){
            
            if(a[i]==a[i+1]){
                dup.insert(a[i++]);
                k++;
            }
        }
        
        if(k==0){
            b.push_back(-1);
            return b;
        }
        
        for(auto x: dup)
        b.push_back(x);
        
        return b;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}
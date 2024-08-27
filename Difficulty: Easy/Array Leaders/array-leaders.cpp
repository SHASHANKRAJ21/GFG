//{ Driver Code Starts
// C++ program to remove recurring digits from
// a given number
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(int n, int arr[])  {
        vector<int> ans; // To store the leaders
        int maxi = arr[n - 1]; // Initialize maxi to the rightmost element
        
        ans.push_back(maxi); // The rightmost element is always a leader

        // Traverse the array from right to left
        for (int i = n - 2; i >= 0; i--) {
            if (arr[i] >= maxi) {
                maxi = arr[i]; // Update maxi
                ans.push_back(arr[i]); // Add the current element to the leaders list
            }
        }
        
        // The leaders are collected in reverse order, so reverse the result
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    long long t;
    cin >> t; // testcases
    while (t--) {
        long long n;
        cin >> n; // total size of array

        int arr[n];

        // inserting elements in the array
        for (long long i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution obj;
        // calling leaders() function
        vector<int> v = obj.leaders(n, arr);

        // printing elements of the vector
        for (auto it = v.begin(); it != v.end(); it++) {
            cout << *it << " ";
        }

        cout << endl;
    }
}

// } Driver Code Ends
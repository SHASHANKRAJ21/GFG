#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int firstOccurrence(vector<int>& arr, int target) {
        int low = 0, high = arr.size() - 1, ans = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] == target) {
                ans = mid;       // possible answer
                high = mid - 1;  // move left to find first occurrence
            } 
            else if (arr[mid] < target) {
                low = mid + 1;
            } 
            else {
                high = mid - 1;
            }
        }
        return ans;
    }

    int lastOccurrence(vector<int>& arr, int target) {
        int low = 0, high = arr.size() - 1, ans = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] == target) {
                ans = mid;       // possible answer
                low = mid + 1;   // move right to find last occurrence
            } 
            else if (arr[mid] < target) {
                low = mid + 1;
            } 
            else {
                high = mid - 1;
            }
        }
        return ans;
    }

    int countFreq(vector<int>& arr, int target) {
        int first = firstOccurrence(arr, target);
        if (first == -1) return 0; // target not found
        int last = lastOccurrence(arr, target);
        return last - first + 1;
    }
};



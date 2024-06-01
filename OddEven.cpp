//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
public:
    string oddEven(string s) {
        unordered_map<char, int> freq;
        for (char ch : s) {
            freq[ch]++;
        }
        int count = 0;
        int t = 0; // Calculate this once
        for (auto it : freq) {
            char ch = it.first;
            t = ch - 96; // Calculate once
            if (it.second % 2 == 0 && t % 2 == 0) {
                count++;
            } else if (it.second % 2 != 0 && t % 2 != 0) {
                count++;
            }
        }
        return (count % 2 == 0) ? "EVEN" : "ODD";
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        string s;
        getline(cin, s);

        Solution obj;
        string res = obj.oddEven(s);

        cout << res << "\n";
    }
}

// } Driver Code Ends

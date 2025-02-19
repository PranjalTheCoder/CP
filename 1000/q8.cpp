#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int maxi = 0;
 
        unordered_set<char> left, right(s.begin(), s.end());
 
        vector<int> count(26, 0);
        for (char c : s) count[c - 'a']++;
 
        for (int i = 0; i < n; i++) {
            left.insert(s[i]);
            count[s[i] - 'a']--;
            if (count[s[i] - 'a'] == 0) right.erase(s[i]);
            int curr_count = left.size() + right.size();
            maxi = max(maxi, curr_count);
        }
 
        cout << maxi << endl;
    }
}
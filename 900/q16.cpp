#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s, t;
    cin >> s >> t;
    int n = s.length();
    int m = t.length();
    vector<int> arr(26, 0), brr(26, 0);
    for(int i=0; i<n; i++){
        arr[s[i]-'A']++;
    }
    for(int i=0; i<m; i++){
        brr[t[i]-'A']++;
    }
    // for(int i=0; i<26; i++){
    //     if(arr[i] != 0){
    //         cout << (char)(i+'A') << "->" << arr[i] << " ";
    //     }
    // }
    // cout << endl;
    // for(int i=0; i<26; i++){
    //     if(brr[i] != 0){
    //         cout << (char)(i+'A') << "->" << brr[i] << " ";
    //     }
    // }
    // cout << endl;
    int j=0;
    for(int i=0; i<n; i++){
        if(j==m){
            cout << "YES" << endl;
            return;
        }
        if(s[i] == t[j]){
            if(arr[s[i]-'A']==brr[s[i]-'A']){
                j++;
                brr[s[i]-'A']--;
            }
        }
        arr[s[i]-'A']--;
    }
    // for(int i=0; i<26; i++){
    //     if(arr[i] != 0){
    //         cout << (char)(i+'A') << "->" << arr[i] << " ";
    //     }
    // }
    // cout << endl;
    // for(int i=0; i<26; i++){
    //     if(brr[i] != 0){
    //         cout << (char)(i+'A') << "->" << brr[i] << " ";
    //     }
    // }
    // cout << endl;
    if(j==m){
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;   
}


int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}

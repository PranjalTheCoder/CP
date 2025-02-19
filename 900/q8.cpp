#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    // vector<int> arr(n+1, 0);
    // // arr[0] = 0;
    // for(int i=0; i<n; i++){
    //     if(s[i] == '<'){
    //         arr[i+1] = arr[i] + 1; 
    //     }
    //     else{
    //         arr[i+1] = arr[i] - 1;
    //     }
    // }
    // unordered_map<int, int> mp;
    // for(auto it: arr){
    //     mp[it]++;
    // }
    // int m = mp.size();
    // cout << m << endl;

    // Longest Run of Same Sign is min distinct element + 1
int maxa=0, counta=0;
int maxb=0, countb=0;
for(int i=0; i<n; i++){
    if(s[i]=='<'){
        counta++;
    }
    else{
        maxa = max(counta, maxa);
        counta=0;
    }
}
maxa = max(maxa, counta);
for(int i=0; i<n; i++){
    if(s[i]=='>'){
        countb++;
    }
    else{
        maxb = max(countb, maxb);
        countb=0;
    }
}
maxb = max(maxb, countb);

cout << max(maxa, maxb)+1 << endl;
}


int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}

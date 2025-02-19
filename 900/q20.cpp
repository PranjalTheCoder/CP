#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s;
    cin >> s;
    int n=s.length();
    // if(n==1){
    //     cout << s << endl;
    //     return;
    // }
    // int counta =0, countb=0;
    // for(int i=0; i<n-1; i++){
    //     if(s[i]=='a' && s[i+1]=='b')
    //         counta++;
    //     if(s[i]=='b'&& s[i+1]=='a')
    //         countb++;
    // }
    // // cout << counta << "->" << countb << endl;
    // if(counta==countb){
    //     cout << s << endl;
    //     return;
    // }
    // else if(counta>countb){
    //     int x, y;
    //     int p=0;
    //     int q=0;
    //     for(int i=n-1; i>=1; i--){
    //         if(s[i] == 'b'&& s[i-1]=='a'){
    //             x = i;
    //             break;
    //         }
    //     }
    //     p = (n-x+1);
    //     for(int i=0; i<n-1; i++){
    //         if(s[i]=='a' && s[i+1]=='b'){
    //             y=i;
    //             break;
    //         }
    //     }
    //     q = y+1;
    //     if(p<q){
    //         for(int j=x; j<n; j++){
    //             s[j] = 'a';
    //         }
    //     }
    //     else if(p>=q){
    //         for(int i=0; i<=y; i++){
    //             s[i] = 'b';
    //         }
    //     }
    // }
    // else if(counta<countb){
    //     int x, y;
    //     int p=0;
    //     int q=0;
    //     for(int i=n-1; i>=1; i--){
    //         if(s[i] == 'a'&& s[i-1]=='b'){
    //             x=i;
    //             break;
    //         }
    //     }
    //     p = (n-x+1);
    //     for(int i=0; i<n-1; i++){
    //         if(s[i]=='b' && s[i+1]=='a'){
    //             y=i;
    //             break;
    //         }
    //     }
    //     q = y+1;
    //     if(p<q){
    //         for(int j=x; j<n; j++){
    //             s[j] = 'b';
    //         }
    //     }
    //     else if(p>=q){
    //         for(int i=0; i<=y; i++){
    //             s[i] = 'a';
    //         }
    //     }
    // }
    // cout << s << endl;
    if(s[0] == s[n-1]){
        cout << s << endl;
    }
    else{
        s[0] = s[n-1];
        cout << s << endl;
    }
}


int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,c;
    cin >> a >> b >> c;
    // int suma =0;
    // int sumb=0;
    if(c%2==1){
        a += (c/2 + 1);
    }
    else{
        a += c/2;
    }
    b += c/2;
    if(a>b){
        cout << "First" << endl;
    }
    else{
        cout << "Second" << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
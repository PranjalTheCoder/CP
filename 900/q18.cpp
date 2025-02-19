#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int a,b,c;
    cin >> a >> b >> c;
    int d1 = b-a;
    int d2 = c-b;
    int d3 = (c-a)/2;
    if(d1==d2 && d1==d3 && d2==d3){
        cout << "YES" << endl;
        return;
    }
    // int ma = (2*b-c)/a;
    // int mb = (a+c)/2*b;
    // int mc = (2*b-a)/c;
    // if(ma>0 || mb>0 || mc>0){
    //     cout << "YES" << endl;
    // }
    // else{
    //     cout << "NO" << endl;
    // }
    bool f1 = false;
    if((2*b-c)%a == 0){
        if((2*b-c)/a>0){
            f1 = true;
        }
    }
    if((a+c)%(2*b)==0){
            f1 = true;
    }
    if((2*b-a)%c==0){
        if((2*b-a)/c>0)
            f1 = true;
    }
    if(f1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}


int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}

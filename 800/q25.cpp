#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;  
    int i=0, j=n-1;
    // string str = "";
    while(true){
        if((s[i] == '0' && s[j] == '1') || (s[i] == '1' && s[j] == '0')){
            i++;
            j--;   
        }
        else{
            break;
        }
    }     
    if(j-i+1 > 0)
        cout << j-i+1 << endl;
    else
        cout << 0 << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
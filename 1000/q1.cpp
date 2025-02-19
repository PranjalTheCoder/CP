#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){   
    string s;
    cin >> s;
    int a=0, b=0;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='0')
            a++;
        else    b++;
    }
    // cout << a << "->" << b << endl;
    if(a==b)
        cout << 0 << endl;
    else{
        int i;
        for(i=0; i<s.length(); i++){
            if(s[i]=='1'){
                if(a>0)
                    a--;
                else{
                    cout << s.length()-i << endl;
                    return;
                }
            }
            if(s[i]=='0'){
                if(b>0)
                    b--;
                else{
                    cout << s.length()-i << endl;
                    return;
                }
            }
        }
        // cout << s.length()-i << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
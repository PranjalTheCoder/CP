#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n;
    cin >> n;
    if(n%2==1 || n<4){
        cout << -1 << endl;
        return;
    }
    if(n==4 || n==6){
        cout << 1 << " "  <<  1 << endl;
        return;
    }
    if(n==8){
        cout << 2 << " " << 2 << endl;
        return;
    }
    ll m = n;
    ll a=0, b=0;
    bool f1=false, f2=false;
    if(m%4==0){
        f1=true;
    }
    if(m%6==0){
        f2=true;
    }
    if(f1){
        a = n/4;
    }
    n=m;
    if(f2){
       b = n/6;
    }
    m = n;
    if(f1&&f2)
        cout << b << " " << a << endl;
    else if(!f1 && f2){
        ll ans1=0;
        n = n-6;
        ans1++;
        ll y =  n/4;
        ans1 += y;
        cout << b << " " << ans1 << endl;
        return;
   }
   else if (f1 && !f2){
        ll ans2 = 0;
        int x = n%6;
        if(x==2){
            n -= 8;
            ans2+=2;
        }
        else if(x==4){
            n-=4;
            ans2 += 1;
        }
       ll y = n/6;
       ans2 += y;
        cout << ans2 << " " << a << endl;
   }
   else{
        n-=6;
        ll ans1 = 1;
        ll y = n/4;
        ans1 += y;
        ll ans2=0;
        while(1){
            bool d=true;
            if(m%6!=0){
                m-=4;
                ans2++;
                d=false;
            }
            if(d)
                break;
        }
       if(m>=6 && m%6==0){
            ll y = m/6;
            ans2 += y;
            cout << ans2 << " " << ans1 << endl;
       }
       else{
        cout << ans1 << " " << ans1 << endl;
       }
   }
}


int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}

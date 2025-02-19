#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){   
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=0; i<n; i++){
        arr[i] = arr[i]%k;
        if(arr[i] == 0){
            cout << 0 << endl;
            return;
        }
    }
    if(k==2 || k==3 || k==5){
        int mini = INT_MAX;
        for(int i=0; i<n; i++){
            mini = min(mini, k-arr[i]);
        }
        cout << mini << endl;
    }
    else{
        int count = 0;
        int countb = 0, counta=0;
        for(int i=0; i<n; i++){
            if(arr[i] == 0){
                cout << 0 << endl;
                return;
            }
            if(arr[i] == 2){
                count++;
                if(count%2==0){
                    cout << 0 << endl;
                    return;
                }
            }
            else if(arr[i] == 1){
                countb++;
            }
            else if(arr[i] == 3){
                counta++;
            }
        }
        if(counta>0 || (count == 1 && countb>0)){
            cout << 1 << endl;
            return;
        }
        if(n==1 && arr[0]==1){
            cout << 3 << endl;
            return;
        }
        cout << 2 << endl;

    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
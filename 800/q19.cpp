#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    int po=0;
    int ne=0;
    int count = 0;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(arr[i] == 1)
            po++;
        else if(arr[i] == -1)
            ne++;
    }
    if(n%2==0){
        while(true){
            if(po >= ne && ne%2==0){
                break;
            }
            po++;
            ne--;
            count++;
        }
    }
    else{
        while(true){
            if(po >= ne && ne%2==0){
                break;
            }
            po++;
            ne--;
            count++;
        }
    }
    cout << count << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
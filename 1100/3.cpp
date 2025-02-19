#include<iostream>
#include<bits\stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "enter size :";
    cin >> n;
    vector<int> arr(n);
    arr[0] = -3;
    for(int i=1; i<n; i++){
        arr[i] = i;
    }
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl << "mod" << endl;
    for(int i=0; i<n; i++){
        cout << arr[i]%(i+1) << " ";
    }
    cout << endl;
}
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    if(arr[0] == arr[n-1]) cout<<0;
    else {
        int count = 0;
        for(int i=0; i<n; i++) {
            if(arr[i] != arr[0]) count++;
        }
        cout << count;
    }
}

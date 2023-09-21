#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    int arr[n];

    unordered_map<int, int> mpp;

    for(int i=0; i<n; i++) {
        cin>>arr[i];
        mpp[arr[i]]++;
    }
    int q; cin>>q;
    while(q--) {
        int num = 0;
        cin>>num;
        cout<<"Freq of "<<num<<" --> "<<mpp[num]<<endl;
    }
    int max=0;
    for(auto it : mpp) {
       if(it.second > max) {
           max = it.second;
       } 
    }

    cout<<"The number with highest frequency = "<<max;
    return 0;
}

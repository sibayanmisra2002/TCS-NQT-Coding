#include<bits/stdc++.h>
using namespace std;

void findDuplicate(int arr[], int n) {
    map<int, int> mp;
    for(int i=0; i<n; i++) {
        mp[arr[i]]++;
    }
    for(auto i: mp) {
        if(i.second > 1) {
            cout<<i.first<<" ";
        }
    }
}

int main() {
    int n = 8;
    int arr[] = {1, 1, 2, 2, 3, 4, 5, 5};
    
    findDuplicate(arr, n);
}
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    
    string s1, s2;
    cin>>s1>>s2;

    int count1_0 = 0; int count1_1 = 0; int count2_1 = 0; int count2_0 = 0;

    for(int i=0; i<n; i++) {
        if(s1[i] == '1') count1_1++;
        count1_0++;
    }
    for(int i=0; i<n; i++) {
        if(s2[i] == '1') count2_1++;
        count2_0++;
    }

    if(count1_1 == count2_1 && count1_0 == count2_0) {
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}

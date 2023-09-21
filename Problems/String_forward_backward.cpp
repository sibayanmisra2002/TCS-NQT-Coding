#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;
    int n = s.length();
    string forward = "";
    string backward = "";

    forward = s[n-1] + s.substr(0, n-1);
    backward = s.substr(1, n-1) + s[0];

    if(forward == backward) cout<<"Equal"<<endl;
    else cout<<"Not equal"<<endl;
    return 0;
}

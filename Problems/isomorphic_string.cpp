#include <bits/stdc++.h>
using namespace std;

bool isIsomorphic(string s1, string s2) {
    vector<int> v1(128, -1);
    vector<int> v2(128, -1);
    if(s1.size() != s2.size()) {
        return false;
    }
    for(int i=0; i<s1.size(); i++) {
        if(v1[s1[i]] != v2[s2[i]]) {
            return false;
        }
        v1[s1[i]] = v2[s2[i]] = i;
    }
    return true;
}

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    if(isIsomorphic(s1, s2)) {
        cout<<"Is isomorphic"<<endl;
    }
    else {
        cout<<"Not isomorphic"<<endl;
    }
}

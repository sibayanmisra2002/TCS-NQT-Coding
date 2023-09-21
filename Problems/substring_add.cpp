#include <bits/stdc++.h>
#include<string>
using namespace std;
int main() {
    string s;
    cin>>s;
    int ans = 0;

    for(int i = 0; i < s.length(); i++) {
        for(int j=0; j< s.length(); j++) {
        //substr is a inbuilt func which takes two values - 
        //first and the last index of the string
        string sub = s.substr(i, i-j+1);
        //stoi is a function to convert string to integer
        ans += stoi(sub); 
        }
    }
    cout<<ans<<endl;
}

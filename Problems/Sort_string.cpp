#include <bits/stdc++.h>
#include <vector>
using namespace std;

string string_sort(string s) {
    vector<int> freq(26,0);
    //storing the frequency values of the alphabets
    for(int i=0; i<s.length(); i++) {
        freq[s[i]-'a']++;
    }
    //creating the sorted string
    int j=0;
    for(int i=0; i<26; i++) {
        while(freq[i]--) {
            s[j] = i + 'a';
            j++;
        }
    }
    return s;
}

int main() {
    string s;
    cin>>s;
    cout<<string_sort(s)<<endl;
    // string_sort(s);
}

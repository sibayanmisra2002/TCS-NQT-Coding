//letters of the word reversed in a string but words are as it is

#include<iostream>
#include<string>

using namespace std;

void reverseWords(string s) {
    string res = "";
    for(int i=0; i<s.length(); i++) {
        string word = "";
        while(s.[i]!='.' && i < s.length()) {
            word += s[i];
            i++;
        }
        for(int j=word.size()-1; j>=0; i--)
        res = word[j] + '.';
    }
    res.pop_back();
    cout<<res<<endl;
}

int main() 
{
    string s = "I.love.this.program.very.much";
    reverseWords(s);
}
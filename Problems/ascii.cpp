#include <iostream>
using namespace std;

int main() {
 char c;
 int a;
 cout << "Enter a character: ";
 cin >> c;
 a = int(c);
 if(a >= 97 && a <= 122) {
    cout<< "LowerCase"<<endl;
 }
 else if(a >= 65 && a <= 90) {
    cout<< "Uppercase" <<endl;
 }
 else{
    cout << "Numeric or something else"<<endl;
 }
 return 0;
}
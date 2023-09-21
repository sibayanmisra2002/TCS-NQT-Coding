#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n; 
    cin>>n;
    //calculating the length of input
    int temp = n;
    int len = 0;
    while(temp) {
        temp /= 10;
        len++;
    }
    int ans = pow(n, 4);
    int lastdigit = 0;
    int power = 0;
    while(len) {
        int ld = ans%10;
        lastdigit = lastdigit + ld*pow(10, power++);
        ans /= 10;
        len--; 
    }

    if(lastdigit == n) {
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }    

    return 0;
}

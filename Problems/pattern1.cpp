#include<iostream>
using namespace std;
int main() 
{
    int i=1, n;
    cin>>n;
    while(i<=n) {
        int j = 1;
        while (j<=n)
        {
            cout<<" * ";
            j = j+1;
        }
        cout<<endl;
        i = i+1;        
    }
    cout<<"Pattern 2 ------------------"<<endl;
    int k = 1;
    while(k<=n) {
        int j = 1;
        while (j<=k)
        {
            cout<<" * ";
            j++;
        }
        cout<<endl;
        k++;        
    }
    return 0;
}
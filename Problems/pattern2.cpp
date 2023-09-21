#include<iostream>
using namespace std;
int main() 
{
    int n;
    cin>>n;
    // while(i<=n) {
    //     int j = 1;
    //     while(j<=n) {
    //         cout<<j<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    int count = 1;
    // while(i<=n) {
    //     int j = 1;
    //     while (j<=n)
    //     {
    //         cout<<count<<" ";
    //         count++;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;        
    // }
    cout<<"Pattern3-----------------"<<endl;
    int i =1;
    while (i<=n)
    {
        int j=1;
        while (j<=i)
        {
            cout<<count<<" ";
            count++;
            j++;
        }
        cout<<endl;
        i++;        
    }
    
    return 0;
}
#include<iostream>
using namespace std;
int main() 
{
    int n;
    int i=1, sum=0;
    cout<<"Enter the no. till which u want even no.s: " <<endl;
    cin>>n;
    while(i<=n) {
        if(i%2==0) {
            sum = sum+i;           
        }
        i++;
    }
    cout<<"sum is: "<<sum<<endl;
    return 0;
}

/*, sum=0*/
   /* cout<<"Enter the no. till which u want to have sum of: " <<endl;
    cin >> n;
    while(i<=n) {
        sum = sum + i;
        i++;
    }
    cout<<"Sum: "<<sum<<endl; */
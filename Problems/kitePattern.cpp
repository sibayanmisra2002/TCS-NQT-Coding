#include <bits/stdc++.h>
using namespace std;

void triangle(int n) {
        for(int i=0; i<2*n; i++) {
        int col = (i>n ? 2*n-i : i);
        for(int j=0; j<col; j++) {
                cout<<"* ";
        }        
        cout<<endl;
        }
}

void kite(int n) {
        for(int i=0; i<2*n; i++) {
        int col = (i>n ? 2*n-i : i);
        int spaces = n-col;
        for(int k=0; k<spaces; k++) {
                cout<<" ";
        }
        for(int j=0; j<col; j++) {
                cout<<"* ";
        }        
        cout<<endl;
        }
}

void pyramid(int n) {
      for(int i=1; i<=n; i++) {
        
        int spaces = n-i;
        for(int k=0; k<spaces; k++) {
                cout<<"  ";
        }
        for(int j=i; j>=1; j--) {
                cout<<j<<" ";
        } 
        for(int j=2; j<=i; j++) {
                cout<<j<<" ";
        }        
        cout<<endl;
        }  
}

void numberKite(int n) {
       for(int i=1; i<2*n; i++) {
        
        int col = (i>n ? 2*n-i : i);
        int spaces = n-col;

        for(int k=0; k<spaces; k++) {
                cout<<"  ";
        }
        for(int j=col; j>=1; j--) {
                cout<<j<<" ";
        } 
        for(int j=2; j<=col; j++) {
                cout<<j<<" ";
        }        
        cout<<endl;
        }  
}

int main() {
    int n;
    cin >> n;    
    triangle(n);
    kite(n);
    pyramid(n);
    numberKite(n);

        return 0;
    }
    


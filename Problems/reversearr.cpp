#include<iostream>
using namespace std;

void printArray(int a[], int size){
    for(int i=0; i<size; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void reverse(int a[], int size){
    int s = 0;
    int e = size-1;
    while(s<=e){
        swap(a[s], a[e]);
        s++;
        e--;
    }
}

int main() 
{
    int arr[5] = {1, 2, 3, 4, 5};
    int brr[6] = {-12, 6, 18, -32, 54, 72};
    
    reverse(arr, 5);
    reverse(brr, 6);

    printArray(arr, 5);
    printArray(brr, 6);
    return 0;
}
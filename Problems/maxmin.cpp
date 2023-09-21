#include<iostream>
using namespace std;

int getmax(int arr[], int size) {
    int max = 0;
    for(int i=0; i<size; i++) {
        if(arr[i] > arr[max]) {
            max = i;
        }
    }
    return arr[max];
}

int getmin(int arr[], int size) {
    int min = 0;
    for(int i=0; i<size; i++) {
        if(arr[i] < arr[min]) {
            min = i;
        }
    }
    return arr[min];
}

int main() 
{
    int n;
    cin >> n;
    int arr [100];
    for(int i = 0; i<n; i++) {
        cin >> arr[i];
    }
    cout<<"Maximum: "<< getmax(arr, n)<<endl;
    cout<<"Minimum: "<< getmin(arr, n)<<endl;

    return 0;
}
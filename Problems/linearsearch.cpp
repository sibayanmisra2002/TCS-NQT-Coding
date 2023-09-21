#include<iostream>
using namespace std;

bool search(int arr[], int size, int key) {
    for(int i=0; i<size; i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}

int main() 
{
    int arr[20]; int n;
    cin >> n;
    cout<<"Enter the elements: "<<endl;
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int key;
    cout<<"Enter the element u want to search: "<<endl;
    cin >> key;

    bool found = search(arr, n, key);
    if(found) {
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;

void swapalternate(int arr[], int size){
    for(int i=0; i<size; i+=2){
        if(i+1 < size){
            swap(arr[i],arr[i+1]);
        }        
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() 
{
    int arr[6] = {1,2,3,4,5,6};
    printArray(arr, 6);
    int arr2[9] = {1,2,3,4,5,6,7,8,9};
    printArray(arr2, 9);

    swapalternate(arr, 6);
    swapalternate(arr2, 9);

    printArray(arr, 6);
    printArray(arr2, 9);
    
    return 0;
}
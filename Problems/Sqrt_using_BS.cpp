#include <iostream>

using namespace std;

long long int binarySearch(int n) {
    int s = 0;
    int e = n;
    long long int mid = s + (e-s)/2;
    long long int ans = -1;
    
    while(s<=e) {
        long long int square = mid*mid;
        //checking if the sqrt is equal to mid value
        if(square == n) {
            return mid;
        }
        else if(square < n){
            ans = mid;
            s = mid+1;
        }
        else{
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main()
{
    int x;
    cout<<"Enter a number whose sqrt you want to find: ";
    cin >> x;
    cout << "Answer:  " << binarySearch(x);
    return 0;
}

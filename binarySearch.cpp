#include <iostream>
using namespace std;

int floorSquare(int n){
    int low = 1, high = n;
    while (low <= high)
    {
        long long mid = (low + high) >> 1;
        long long val = mid * mid;
        if(val <= (long long)(n)){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return high;
}

int main(){
    int n = 28;
    int ans = floorSquare(n);
    cout<<"The floor of square root of " << n << " is: "<< ans <<endl;
    return 0; 
}
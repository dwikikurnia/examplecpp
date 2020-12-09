#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n; //size of the array
    //your code goes here
    int x;
    int nums[n] = {};

    int max = nums[0];
    for(int i=0; i<n; i++) {
        cin >> x; //input number
        nums[i] = x;
        if(nums[i]>max)
            max = nums[i];
    }
    cout << max;

    return 0;
}
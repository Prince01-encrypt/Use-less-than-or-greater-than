#include <iostream>
#include <cmath>
#include <algorithm>
#define ll long long
 
using namespace std;
 
int main() {
    int houses;
    cin >> houses;
    int works;
    cin >> works;
    int* arr = new int[works];

    for(int i = 0; i < works; i++) {
        cin >> arr[i];
    }
    ll sum = arr[0] - 1;
    int start = arr[0];

    for(int i = 1; i < works; i++) {
        if(arr[i] < start) {
            sum += arr[i];
            sum = sum + houses - start;
            start = arr[i];
        }
        else if(arr[i] == start) {
            continue;
        }
        else {
            sum = sum + arr[i] - start;
            start = arr[i];
        }
    }
    cout << sum;
    delete[] arr;
    return 0;
}

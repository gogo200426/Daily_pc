#include <iostream>
using namespace std;
int main() {
    int arr[] = {16, 17, 4, 3, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int leaders[n];   
    int index = 0;   
    int maxRight = arr[n - 1];
    leaders[index++] = maxRight;  
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > maxRight) {
            leaders[index++] = arr[i];
            maxRight = arr[i];
        }
    }
    cout << "Leaders: ";
    for (int i = index - 1; i >= 0; i--) {
        cout << leaders[i] << " ";
    }
    return 0;
}

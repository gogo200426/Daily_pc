#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    int arr[n];
    cout <<"Enter " <<n<< " numbers:";
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    int total=(n + 1)*(n + 2)/2;
    int arr_sum=0;
    for (int i=0; i<n; i++) {
        arr_sum+= arr[i];
    }
    int missing =total-arr_sum;
    cout <<"Missing number is:"<<missing << endl;
    return 0;
}

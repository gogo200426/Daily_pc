#include <iostream>
using namespace std;
void Array(int arr[],int n){
    int low=0,mid=0,high=n-1;
    while (mid<=high){
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid]==1) {
            mid++;
        }
        else {
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}
int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    cout<<"Enter elements (0, 1, or 2 only): ";
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }
    Array(arr, n);
    cout<<"Sorted array: ";
    for (int i=0; i<n; i++) {
        cout<< arr[i] << " ";
    }
    cout<<endl;
    return 0;
}

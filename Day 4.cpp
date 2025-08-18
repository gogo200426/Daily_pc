#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8};
    int m = 4, n = 4;
    int merged[m+n];
    for(int i=0;i<m;i++) merged[i] = arr1[i];
    for(int j=0;j<n;j++) merged[m+j] = arr2[j];
    sort(merged, merged+m+n);
    for(int i=0;i<m;i++) arr1[i] = merged[i];
    for(int j=0;j<n;j++) arr2[j] = merged[m+j];
    cout << "arr1 = ";
    for(int i=0;i<m;i++) cout << arr1[i] << " ";
    cout << "\narr2 = ";
    for(int j=0;j<n;j++) cout << arr2[j] << " ";
}

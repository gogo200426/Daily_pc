#include <iostream>
using namespace std;
int main() {
    int nums[]= {3, 1, 3, 4, 2};
    int size = sizeof(nums)/sizeof(nums[0]);
    int repeat = -1;
    for (int i=0; i<size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (nums[i]==nums[j]) {
                repeat=nums[i];
                break;
            }
        }
        if (repeat != -1) break;
    }
    cout << "Repeated Number: " << repeat << endl;
    return 0;
}

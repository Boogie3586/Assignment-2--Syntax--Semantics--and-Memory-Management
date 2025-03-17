#include <iostream>
using namespace std;

int calculateSum(int arr[], int size) {
    int total = o;  // 'o' is not defined, should be '0'
    for (int i = o; i < size; i++) {  // 'o' is used instead of '0'
        total += arr[i];
    }
    return total;
}

int main () {
    int numbers [] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof( numbers [o]);  // 'o' should be '0'
    int result = calculateSum(numbers, size);
    cout << "Sum in C++: " << result << endl;
    return o;  // 'o' should be '0'
}
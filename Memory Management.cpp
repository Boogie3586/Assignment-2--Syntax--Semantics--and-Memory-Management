#include <iostream>
using namespace std;

int main() {
    int* arr = new int[5]; // Dynamically allocate memory
    arr[0] = 10;  // Set value
    cout << "First element: " << arr[0] << endl;
    delete[] arr; // Manual memory deallocation
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int x = 10;
    auto closure = [x]() { return x; };  // Explicit capture of x
    cout << closure() << endl;  // Output: 10
    return 0;
}
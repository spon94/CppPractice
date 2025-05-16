#include <iostream>
using namespace std;

void swapInts(int* a, int* b) {
    if (a != nullptr && b != nullptr) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main() {
    int x = 10;
    int y = 20;
    
    cout << "Before swap: x = " << x << ", y = " << y << endl;
    swapInts(&x, &y);
    cout << "After swap: x = " << x << ", y = " << y << endl;
    
    return 0;
}


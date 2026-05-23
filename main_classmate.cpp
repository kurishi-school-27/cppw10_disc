#include <iostream>
using namespace std;

int main() {
    int value = 42;
    int* ptr = &value;

    cout << "Value: " << *ptr << endl;

    int numbers[3] = {1, 2, 3};
    int* badPtr = numbers;

    return 0;
}

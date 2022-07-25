#include <iostream>

using namespace std;

void SwapPointerValues(int* pointer1, int* pointer2);

int main()
{
    int a, b;
    cout << "Input your first number: ";
    cin >> a;

    cout << "Input your second number: ";
    cin >> b;

    int* ptrA = &a;
    int* ptrB = &b;

    cout << "Pointer dereferenced pointing to first variable: " << *ptrA << endl;
    cout << "Pointer dereferenced pointing to second variable: " << *ptrB << endl;

    SwapPointerValues(ptrA, ptrB);

    cout << "Pointer dereferenced pointing to first variable: " << *ptrA << endl;
    cout << "Pointer dereferenced pointing to second variable: " << *ptrB << endl;
}

void SwapPointerValues(int* pointer1, int* pointer2) {
    cout << "Swapping pointer dereferenced values" << endl;

    int temp = *pointer1;
    *pointer1 = *pointer2;
    *pointer2 = temp;
}
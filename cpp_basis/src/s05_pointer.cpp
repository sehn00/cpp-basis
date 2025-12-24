#include <iostream>
using namespace std;

int main()
{
    int a = 123;
    cout << "a = " << a << '\n';
    cout << "addr of a = " << &a << '\n';

    int *b = &a;
    cout << b << '\n';
    cout << *b << '\n';     // 역참조

    return 0;
}
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

    *b = 456;
    cout << "b = " << *b << '\n';   // *b 의 값을 바꾸면
    cout << "a = " << a << '\n';    // a 의 값도 바뀜 (Call by addr)

    cout << "sizeof(b) = " << sizeof(b) << '\n';
    // 64 bit 환경에서는, 주소 하나 8 byte

    char *text = "hello";
    cout << *(text) << " " << *(text + 1) << " " << '\n';
    cout << text[1] << '\n';

    return 0;
}
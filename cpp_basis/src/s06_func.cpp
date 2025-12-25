#include <iostream>
using namespace std;

int add_num(int a, int b);
void add_num(int a, int b, int *c);
// C++에서는 이름 같은 함수 여러 개 만들 수 있음: "함수 오버로딩 (Func Overloading)""
//  - 매개변수의 '개수', '자료형', '순서'
//  - 셋 중 하나라도 다르면 다른 함수로 인식
//  - 리턴 타입만 다르고 매개변수 같으면? 오버로딩 불가능
void calc(int a, int b, int *c, int *d);

int main()
{
    cout << "add_num(1, 2) = " << add_num(1, 2) << '\n';

    int sum;
    add_num(4, 5, &sum);
    cout << "sum = " << sum << '\n';

    int cal1, cal2;
    calc(4, 5, &cal1, &cal2);
    // 리턴값 여러개인 듯한 착시 제공!
    cout << "cal1, cal2 = " << cal1 << ", " << cal2 << '\n';

    return 0;
}

int add_num(int a, int b)
{
    return a + b;
}

void add_num(int a, int b, int *c)
{
    *c = a + b;
}

void calc(int a, int b, int *c, int *d)
{
    *c = a + b;
    *d = a - b;
    // 리턴값 여러개인 듯한 착시 제공!
}
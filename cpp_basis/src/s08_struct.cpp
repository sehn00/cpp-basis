#include <bits/stdc++.h>
using namespace std;

struct Mystruct {
    int first;
    int second;

    int sum() {
        return first + second;
    }
};
// - C++ 구조체는 python의 '클래스' 와 거의 유사하다!
// - '멤버 함수 (메소드)' 존재 (예: sum() )
// - 선언과 동시에 이름(Mystruct)이 자동으로 새 자료형으로 등록됨

int main()
{
    Mystruct a;
    a.first = 123;
    a.second = 456;
    cout << "sizeof(a) = " << sizeof(a) << '\n';

    Mystruct *ptr_a = &a;   // 구조체 포인터
    cout << "(*ptr_a).first = " << (*ptr_a).first << '\n';  // 얘랑
    cout << "ptr_a->first = " << ptr_a->first << '\n';  // 얘 똑같다!

    Mystruct pairs[10];     // 구조체 배열
    for (int i = 0; i < 10; i++) {
        pairs[i].first = i;
        pairs[i].second = i * 2;
    }
    for (int i = 0; i < 10; i++) {
        cout << pairs[i].sum() << " ";
    }
    cout << '\n';

    return 0;
}
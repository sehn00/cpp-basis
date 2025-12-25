#include <bits/stdc++.h>
using namespace std;

template <typename T>
// T = 아직 안정해진 자료형
// 나중에 객체 만들때, T 자리에 int나 double 등을 쓰겠다는 뜻
class MyClass {
public:
    T data_;    // T타입 멤버변수 data_를 선언
};
// 템플릿은, 선언 후 바로 아래 붙어있는
// 함수 한 개 혹은 클래스 한 개 까지만 해당된다!

int main()
{
    MyClass<int> my_int;
    // template의 모든 T가 int로 변환된 객체(object) my_int 생성
    MyClass<double> my_double;
    // 모든 T가 double로 변환된 객체 my_double 생성

    my_int.data_;
    my_double.data_;

    cout << "sizeof(my_int) = " << sizeof(my_int) << '\n';
    cout << "sizeof(my_double) = " << sizeof(my_double) << '\n';
    // 출력: 4, 8

    return 0;
}
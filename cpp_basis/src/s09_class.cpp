#include <bits/stdc++.h>
using namespace std;

class Myclass{
private:
    // (1) private: 클래스 내부 함수만 접근 가능
    int num_ = 0;
    
public:
    // (2) public: 클래스 외부에서도 접근 가능
    Myclass() {     // 생성자 (~ 파이썬 __init__)
        cout << "Myclass() 호출" << '\n';    // 호출시점 확인
    }

    Myclass(int num) {  // 매개변수 생성자
        cout << "Myclass(int num) 호출" << '\n';
        this->num_ = num;   // "this" ~ 파이썬의 "self"
        // 매개변수명과 멤버 변수명이 겹칠때 사용 (여기선 생략 가능)
    }
    // 생성자 2종류

    ~Myclass() {    // 소멸자
        cout << "~Myclass() 호출" << '\n';   // 호출시점 확인
    }   // main() 함수가 return 될 때 호출됨

    void increment(int a) {
        num_ += a;
    }
    void print() {
        cout << "print num_: " << num_ << '\n';
    }
};

int main()
{
    Myclass my_class1;       // 생성자1 호출
    Myclass my_class2(123);  // 생성자2 호출

    my_class1.print();
    my_class2.print();

    my_class1.increment(1);
    my_class1.print();

    return 0;
}
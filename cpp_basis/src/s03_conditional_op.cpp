#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "정수 입력: ";
    cin >> num;
    
    // 삼항 연산자
    cout << ((num % 2 == 0) ? "Even number." : "Odd number.") << '\n';

    // switch-case문
    switch(num) {
        case 0:
            cout << "정수 0 입니다." << '\n';
            break;
        case 1:
            cout << "정수 1 입니다." << '\n';
            break;
        default:
            cout << "0과 1이 아닌 정수." << '\n';
            break;
    }

    return 0;
}
#include <iostream>

using namespace std;

int main()
{
    char user_input[100];

    // cin vs getline
    cout << "원하는 문장 입력: " << '\n';
    
    // cin >> user_input;  // 공백 만나면 입력 종료
    cin.getline(user_input, sizeof(user_input));
    // cin.getline(): 공백 포함 가능한 input 받기

    cout << "메아리: " << user_input << '\n';

    // --------------------------------------

    int num = -1;
    // cin.getline(user_input, sizeof(user_input));
    cin.ignore(100, '\n');
    // cin.ignore(): 최대 100칸 or '\n' 만나면 input 종료

    cin >> num;
    cout << user_input << " " << num << '\n';

    return 0;
}

/*
    정리:
    - cin >>
    - cin.getline()
    - cin.ignore()
*/
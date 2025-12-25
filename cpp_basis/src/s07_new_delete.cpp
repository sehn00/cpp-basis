#include <bits/stdc++.h>
using namespace std;

const int kMaxStr = 100; 

int main()
{
    char str1[] = "Hello, world!";
    char str2[kMaxStr];

    memcpy(str2, str1, min(sizeof(str1), sizeof(str2)));
    cout << "str2: " << str2 << '\n';

    char *dynamic_ary = new char[kMaxStr];  // ~malloc()
    // int *p = new int: 메모리만 할당
    // int *p = new int(10): 할당과 동시에 10으로 초기화
    // int *arr = new int[5]: int 5개가 들어갈 연속공간 할당
    //// new[] 로 만들었으면, delete[] 로 지우기
    memcpy(dynamic_ary, str2, kMaxStr);
    cout << "dyn ary: " << dynamic_ary << '\n';
    delete[] dynamic_ary;   // 삭제 시 delete[]

    return 0;
}
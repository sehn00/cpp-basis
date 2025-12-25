#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 파일 출력 (output file stream)
    {
        ofstream ofile; // ofstream 변수 ofile 생성

        ofile.open("my_contacts.txt");
        ofile << "안녕하세요, 반갑습니다.\n";   // 파일에 멘트 저장
        ofile << "두 번째 줄.\n";
        ofile << "세 번째 줄.\n";
        ofile.close();
    }

    // 파일 입력 (input file system)
    char line[100];     // 줄 별로 읽어오는거 저장할 공간
    ifstream ifile;     // ifstream 변수 ifile 생성
    ifile.open("my_contacts.txt");  // 파일 열기

    int line_num = 0;
    while (ifile.getline(line, sizeof(line))) {
        // getline: line 더 읽을 수 없으면 false를 리턴
        cout << line_num << ": ";
        cout << line << '\n';

        line_num += 1;
    }
    ifile.close();

    return 0;
}
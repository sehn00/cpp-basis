#include <iostream>

using namespace std;

int main()
{
    // (1) for
    for (int i = 0; i < 10; i++) {
        cout << i << " ";
    }
    cout << '\n';

    int ary[] = {1, 2, 3, 4, 5, 4, 3, 2, 1, };
    int n = sizeof(ary) / sizeof(ary[0]);
    for (int i = 0; i < n; i++) {
        cout << ary[i] << ' ';
    }
    cout << '\n';

    char str[] = "Hello\0, World!";
    for (int i = 0; i < sizeof(str); i++) {
        if (str[i] == '\0')
            break;
        cout << str[i] << " ";
    }
    cout << '\n';
    // sizeof 안쓰려면?
    for (int i = 0; str[i] != '\0'; i++) {
        cout << str[i] << " ";
    }
    cout << '\n';


    // (2) while
    int i = 0;
    while (i < 10) {
        cout << i << " ";
        i++;
    }
    cout << '\n';

    i = 0;
    while (true) {
        if (i == 10)
            break;
        cout << i << " ";
        i++;
    }
    cout << '\n';

///////////////////////// 1:46:00


    return 0;
}
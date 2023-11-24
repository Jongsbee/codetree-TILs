#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    cin >> a >> b;

    if(a>b)
    {
        a *= 2;
        b += 10;
    }else
    {
        b *= 2;
        a += 10;
    }

    cout << a << " " << b << endl;
    return 0;
}
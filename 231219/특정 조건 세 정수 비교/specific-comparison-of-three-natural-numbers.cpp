#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int max, a, b, c;
    max = 0;

    cin >> a >> b >> c;

    if(a < b && a < c)
    {
        cout << 1;
    }
    else cout << 0;

    if(a == b == c)
    {
        cout << " " << 1 << endl;
    }
    else 
    {
        cout << " " << 0 << endl;
    }

    return 0;
}
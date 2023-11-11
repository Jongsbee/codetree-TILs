#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c;
    cin >> a >> b >> c;

    int ans = (b>a && b<c) ? 1 : 0;
    cout << ans << endl;
    return 0;
}
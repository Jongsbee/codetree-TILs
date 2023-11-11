#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.

    int a,b,c;
    cin >> a >> b >> c;
    int sum = a + b + c;
    int avg = sum / 3;
    int ans = sum - avg;
    cout << sum<< "\n" << avg << "\n" << ans << endl;


    return 0;
}
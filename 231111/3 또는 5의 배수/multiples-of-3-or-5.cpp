#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    cin >> a;
    string ans1, ans2;
    ans1 = a%3 == 0 ? "YES" : "NO";
    ans2 = a%5 == 0 ? "YES" : "NO";
    cout << ans1 << "\n" << ans2 << endl;
    return 0;
}
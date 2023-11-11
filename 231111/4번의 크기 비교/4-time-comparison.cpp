#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c,d,e;
    cin >> a;
    cin >> b >> c >> d >> e;
    int ans1,ans2,ans3,ans4;

    ans1 = (a>b) ? 1 : 0;
    ans2 = (a>c) ? 1 : 0;
    ans3 = (a>d) ? 1 : 0;
    ans4 = (a>e) ? 1 : 0;

    cout << ans1 << "\n"<< ans2 << "\n"<< ans3 << "\n"<< ans4 << endl;
    return 0;
}
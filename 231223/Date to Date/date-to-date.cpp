#include <iostream>
#include <vector>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    vector<int> months
    {
        0,31,28,31,30,31,30,31,31,30,31,30,31
    };

    int a,b,c,d;
    int answer=0;

    cin >> a >> b >> c >> d;

    for(int i=a; i<c; i++)
    {
        answer += months[i];
    }

    cout << answer + (d-b) + 1 << endl;
    return 0;
}
#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int money;
    cin >> money;
    string answer;
    if(money >= 3000)
    {
        answer = "book";
    }
    else if(money >= 1000)
    {
        answer = "mask";
    }
    else if(money >= 500)
    {
        answer = "pen";
    }
    else answer = "no";

    cout << answer << endl;

    return 0;
}
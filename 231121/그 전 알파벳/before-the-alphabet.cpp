#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    char answer;
    cin >> answer;

    if(answer == 'a') answer = 'z';
    else answer -= 1;

    cout << answer << endl;
    return 0;
}
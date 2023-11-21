#include <iostream>
#include <string>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    string input;
    cin >> input;

    for(const auto&c : input)
    {
        if(c==input[1]) cout << input[0];
        else cout << c;
    }
    cout << endl;

    return 0;
}
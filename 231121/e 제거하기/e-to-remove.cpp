#include <iostream>
#include <string>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    string input;
    cin >> input;
    bool checked = false;
    for(const auto& c : input)
    {
        if(c == 'e' && !checked)
        {
            checked = true;
            continue;
        }
        else cout << c;
    }
    cout << endl;


    return 0;
}
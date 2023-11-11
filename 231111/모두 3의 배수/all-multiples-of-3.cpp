#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int answer = 1;
    int input;
    for(int i=0; i<5; i++)
    {
        cin >> input;
        if(input%3 != 0)
        {
            answer = 0;
            break;
        }
    }
    cout << answer << endl;
    return 0;
}
#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int answer = 0;
    int input;
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            cin >> input;
            if(j<=i) answer += input;
        }
    }
    cout << answer << endl;


    return 0;
}
#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.


    int n;
    cin >> n;
    int index = 1;
    int count = 0;
    int input;


    for(int i=1; i<=n; i++, index++)
    {
        cin >> input;
        // cout << input << endl;
        if(input == 2) count += 1;
        if(count == 3)
        {
            cout << index << endl;
            break;
        }
    }

    return 0;

}
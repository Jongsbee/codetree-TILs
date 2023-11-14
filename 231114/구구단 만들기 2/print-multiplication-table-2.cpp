#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int a,b;
    cin >> a >> b;

    for(int i=1; i<=4; i++)
    {
        for(int j=b; j>=a; j--)
        {
            if(j!=b) cout << " / ";
            cout << j << " * " << i*2 << " = " << j*i*2;
        }
        cout << endl;
    }


    return 0;
}
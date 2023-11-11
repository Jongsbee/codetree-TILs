#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    cin >> n;

    for(int i=1; i<=2*n-1; i++)
    {
        for(int j=0; j<abs(abs(i-n)-n); j++)
        {
            cout << '*';
        }
        cout << "\n" << endl;

    }

    return 0;
}
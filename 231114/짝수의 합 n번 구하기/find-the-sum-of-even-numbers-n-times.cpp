#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        int a,b;
        cin >> a >> b;
        int answer = 0;
        for(int j=a; j<=b; j++)
        {
            if(j%2==0) answer += j;
        }
        cout << answer << endl;
    }
    return 0;
}
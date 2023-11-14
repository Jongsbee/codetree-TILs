#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int answer = 0;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(i%2==1) 
            {
                answer +=1;
                cout << answer << " ";
            }
            else
            {
                answer += 2;
                cout << answer << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
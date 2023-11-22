#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int answer = 0;
    for(int i=0; i<n; i++)
    {
        int input;
        cin >> input;
        answer += input;
    }

    string ans = to_string(answer);

    for(int i=0; i<ans.size(); i++)
    {
        cout << ans[(i+1)%ans.size()];
    }
    cout << endl;

    return 0;
}
#include <iostream>
#include <vector>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int a,b;
    cin >> a >> b;

    vector<int> vec(10);

    while(a>1)
    {
        vec[a%b] += 1; // 나머지에 하나씩 더한다.
        a /= b;
    }
    int answer = 0;
    for(const auto& c : vec)
    {
        answer += c * c;
    }
    cout << answer << endl;

    return 0;
}
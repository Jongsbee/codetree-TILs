#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    vector<string> vec(4);
    cin >> vec[0] >> vec[1];

    for(const auto& c : vec[0])
    {
        if(c < 'A') vec[2] += c;
    }

    for(const auto& c : vec[1])
    {
        if(c < 'A') vec[3] += c;
    }

    cout << stoi(vec[2]) + stoi(vec[3]) << endl;
    return 0;
}
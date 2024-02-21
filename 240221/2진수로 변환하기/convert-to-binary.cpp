#include <iostream>
#include <vector>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    int count = 0;
    cin >> a;

    vector<int> vec;

    while(true)
    {
        if(a < 2)
        {
            vec.emplace_back(a);
            break;
        }
        vec.emplace_back(a%2);
        a /= 2;
    }
    for(int i=vec.size()-1 ; i>=0; i--)
    {
        cout << vec[i];
    }
    return 0;
}
#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    cin >> n;

    vector<int> vec;
    for(int i=1; i<=n; i++)
    {
        int inp;
        cin >> inp;

        vec.emplace_back(inp);

        if(i%2 == 1)
        {
            sort(vec.begin(), vec.end());
            cout << vec[vec.size()/2] << " ";
        }
    }
    cout << endl;
    return 0;
}
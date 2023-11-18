#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int maxx = 0;
    int minn = 20;

    for(int i=0; i<3; i++)
    {
        string word;
        cin >> word;
        int length = word.size();
        maxx = max(length,maxx);
        minn = min(length,minn);

    }

    cout << maxx - minn << endl;
    return 0;
}
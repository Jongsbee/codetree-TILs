#include <iostream>
#include <vector>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    cin >> n;

    vector<string> vec(n);

    int sumAll = 0;
    int count = 0;

    for(int i=0; i<n; i++)
    {
        cin >> vec[i];
    }

    char word;
    cin >> word;

    for(const auto& c : vec)
    {
        if(c[0] == word)
        {
            count += 1;
            sumAll += c.size();
        }
    }
    cout << fixed;
    cout.precision(2);

    cout << count << " " << (float)sumAll/count << endl;



    return 0;
}
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    cin.ignore();

    vector<char> vec(n);

    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    char c, d;
    vector<char>::iterator it = vec.end(); // 초기 이터레이터는 벡터 끝

    for (int tc = 0; tc < m; tc++) {
        cin >> c;

        switch (c) {
            case 'L':
                if (it != vec.begin()) {
                    --it;
                }
                break;

            case 'P':
                cin >> d;
                vec.insert(it, d);
                break;

            case 'D':
                if(it != vec.end())
                {
                    vector<char>::iterator it2 = it;
                    it++;
                    vec.erase(it2);
                }
                break;

            case 'R':
                if (it != vec.end()) {
                    ++it;
                }
                break;
        }
    }

    for(const auto& c: vec)
    {cout << c;}

    cout << endl;


    return 0;
}
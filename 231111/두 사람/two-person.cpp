#include <iostream>
#include <vector>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    vector<int> v1(2);
    vector<char> v2(2);

    cin >> v1[0] >> v2[0];
    cin >> v1[1] >> v2[1];
    
    int ans = ((v1[0] >= 19 && v2[0] == 'M') || (v1[1] >= 19 && v2[1] == 'M')) ? 
    1 : 0;
    cout << ans << endl;

    return 0;
}
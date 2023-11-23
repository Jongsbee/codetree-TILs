#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    vector<int> months {0,31,28,31,30,31,30,31,31,30,31,30,31};
    int Y,M,D;
    
    cin >> Y >> M >> D;

    // 윤년체크
    if(Y%4 == 0) months[2] = 29;
    
    // 체크
    if(D > months[M]) cout << -1 << endl;
    else
    {
        if(M == 1 || M == 2 || M == 12) cout<< "Winter" << endl;
        else if(M >= 3 && M <= 5) cout<< "Spring" << endl;
        else if(M >= 6 && M <= 8) cout<< "Summer" << endl;
        else cout<< "Fall" << endl;
    }

    return 0;
}
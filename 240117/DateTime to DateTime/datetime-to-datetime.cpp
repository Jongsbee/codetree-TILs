#include <iostream>
#include <string>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.


    // 11 11 11 -> a b c


    int a,b,c;
    cin >> a >> b >> c;

    int count =
        ((a-11) * 24 * 60) + ((b-11) * 60) + (c-11);
    
    if(count <= 0)
    {
        cout << -1 << endl;
    }
    else 
    {
        cout << count << endl;
    }
    return 0;
}
#include <iostream>
#include <string>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    string a,b;
    cin >> a >> b;
    int count = 0;
    for(int i=0; i<a.size()-1; i++)
    {
        if(a[i]==b[0] && a[i+1] == b[1])
        {
            count += 1;
        }
    }

    cout << count << endl;




    return 0;
}
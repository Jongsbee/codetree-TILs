#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    string b;
    string word;
    getline(cin,a);
    getline(cin,b);

    stringstream ss(a+b);

    while(getline(ss,word,' '))
    {
        cout << word ;;
    }


    return 0;
}
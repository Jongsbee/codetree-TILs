#include <iostream>
#include <string>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a,b;
    cin >> a >> b;
    int answer = -1;
    for(int i=0; i<a.size(); i++)
    {
        string c;
        for(int j=0; j<a.size(); j++)
        {
            c += a[(a.size()-i-1+j)%(a.size())];
        }
        if(b == c)
        {
            answer = i+1;
            break;
        }
    }
    
    cout << answer << endl;
    return 0;
}
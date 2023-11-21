#include <iostream>
#include <string>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    string word;
    string control;
    int index = 0;
    cin >> word >> control;

    for(const auto& c : control)
    {
        if(c == 'L')
        {
            index += 1;
        }
        else
        {
            if(index > 0) index -= 1;
            else index += word.size()-1;
        }
    }
    
    for(int i=0; i<word.size(); i++)
    {
        cout << word[(i+index)%word.size()];
    }
    cout << endl;

    return 0;
}
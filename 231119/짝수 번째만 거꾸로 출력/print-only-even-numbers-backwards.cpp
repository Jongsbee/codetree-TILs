#include <iostream>
#include <vector>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string word;
    cin >> word;

    for(int i=word.size()-1; i>0; i--)
    {
        if(i%2==1) cout<< word[i];
    }



    return 0;
}
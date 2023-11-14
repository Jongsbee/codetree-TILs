#include <iostream>
#include <vector>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int index, input;
    vector<int> vec(10);
    
    for(index = 0; index < 10; index++)
    {
        cin >> input;

        if(input%3 == 0) 
        {
            cout << vec[index-1] << endl;
            break;    
        }

        vec[index] = input;

    }
    return 0;
}
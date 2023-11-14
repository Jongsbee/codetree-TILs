#include <iostream>
#include <vector>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    vector<int> vec(10);

    cin >> vec[0] >> vec[1];

    for(int i=0; i<vec.size(); i++)
    {
        if(i < vec.size()-2) vec[i+2] = vec[i+1] + 2*vec[i];
        cout << vec[i] << " " ;
    }
    cout << endl;



    return 0;
}
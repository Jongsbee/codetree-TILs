#include <iostream>
#include <vector>

using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    vector<int> v(n);

    for(int i=0; i<n; i++)
    {   
        cin>> v[i];
        if(v[i]%3 == 0 && v[i]%2 == 1)
        {
            cout << v[i] << endl;
        }
    }

    return 0;
}
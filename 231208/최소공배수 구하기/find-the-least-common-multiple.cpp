#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.


    int n,m;
    cin >> n >> m;

    int answer = 1;
    int idx = m;

    for(int i=2; i<=idx;)
    {
        // cout << "i : " << i << endl;
        if(m == 1 && n == 1) 
        {
            // break;
            // cout << "this is the end" << endl;
        }


        if(n%i == 0 && m%i == 0) // 둘다 나눠지면
        {
            n /= i;
            m /= i;
            answer *= i;
            // cout << "0: " << n << "    " << m << endl;
        }
        else if(n%i != 0 && m%i != 0) // 둘다 안나눠지면
        {
            i++;
        }
        else if(n % i == 0)
        {
            n /= i;
            answer *= i;
            // cout << "1: " << n << "    " << m  << endl;
        }
        else if(m % i == 0)
        {
            m /= i;
            answer *= i;
            // cout << "2: " << n << "    " << m  << endl;
        }
    }

    cout << answer << endl;

    return 0;
}
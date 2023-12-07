#include <iostream>
#include <vector>

using namespace std;

void LCD(vector<int>& vec, int idx, int answer);

int main() {
    // 여기에 코드를 작성해주세요.
    
    int n;
    cin >> n;
    vector<int> v(n);

    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }

    LCD(v,0,1);
    return 0;
}

void LCD(vector<int>& vec, int idx, int answer)
{
    if(idx == vec.size())
    {
        cout << answer << endl;
        return;
    }
    int maxx = max(vec[idx], answer);

    int cdgys = 1;

    for(int i=maxx; i>=1; i--)
    {
        if(answer % i == 0 && vec[idx] % i == 0)
        {
            int cdgys = i;
            answer = answer * vec[idx] / cdgys;
            // cout << "i : " << cdgys << endl;
            break;
        }
    }
    LCD(vec, idx+1, answer);
}
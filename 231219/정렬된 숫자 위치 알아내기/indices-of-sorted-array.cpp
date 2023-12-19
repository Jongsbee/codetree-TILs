#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Nums
{
    public :
        int number, index;

        Nums(int number, int index)
        {
            this -> number = number;
            this -> index = index;
        }

        Nums(){}
};

bool compareNum(Nums a, Nums b);
bool compareIndex(Nums a, Nums b);

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    vector<Nums> vec(n);

    for(int i=0; i<n; i++)
    {
        cin >> vec[i].number;
        vec[i].index = i+1;
    }

    sort(vec.begin(), vec.end(),compareNum);
    
    for(int i=0; i<n; i++)
    {
        // 재할당 해준다.
        vec[i].number = i+1;
    }

    sort(vec.begin(), vec.end(),compareIndex);
    
    for(int i=0; i<n; i++)
    {
        cout << vec[i].number << " ";
    }
    cout << endl;


    return 0;
}

bool compareNum(Nums a, Nums b)
{
    if(a.number == b.number)
    {
        return a.index < b.index;
    }
    else return a.number < b.number;
}

bool compareIndex(Nums a, Nums b)
{
    return a.index < b.index;
}
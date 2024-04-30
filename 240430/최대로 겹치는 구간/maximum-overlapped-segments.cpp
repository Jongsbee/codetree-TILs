#include <iostream>

#include <vector>

using namespace std;

int main() {
    
    vector<int> vec(201);
    int n;
    int a,b;
    int max = 0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> a >> b;

        for(int j=a+100; j<b+100; j++)
        { 
            vec[j]++;
        }

            
    }

    for(int i=0; i<=200; i++)
    {
        max = max > vec[i] ? max : vec[i];
    }

    cout << max << endl;

    return 0;
}
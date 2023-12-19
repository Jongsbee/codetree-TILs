#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int height, weight;

    cin >> height >> weight;

    int BMI = weight *  10000 / (height*height);
    
    cout << BMI << endl;
    if(BMI >= 25) cout << "Obesity" << endl;
    return 0;
}
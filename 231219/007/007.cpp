#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    class 공공칠
    {
        public :
            string secretCode;
            char meetingPoint;
            int time;

            공공칠 (string secretCode, char meetingPoint, int time)
            {
                this -> secretCode = secretCode;
                this -> meetingPoint = meetingPoint;
                this -> time = time;
            }
    };

    string first;
    char second;
    int third;

    cin >> first >> second >> third;

    공공칠 rhdrhdclf = 공공칠(first, second, third);
    
    cout << "secret code : " <<  rhdrhdclf.secretCode << endl;
    cout << "meeting point : " <<  rhdrhdclf.meetingPoint << endl;
    cout << "time : " <<  rhdrhdclf.time << endl;



    return 0;
}
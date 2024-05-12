#include <iostream>
#include <vector>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int vecSize = 200001;
    vector<int> vec(vecSize);
    const int Color_N = 0;
    const int Color_W = 1;
    const int Color_B = 2;
    const int Color_G = 3;
    const int Color_WW = 11;
    const int Color_WB = 12;
    const int Color_BW = 21;
    const int Color_BB = 22;
    const int Color_WWB = 112;
    const int Color_BWW = 211;
    const int Color_WBB = 122;
    const int Color_BBW = 221;
    const int Color_WBW = 121;   
    const int Color_BWB = 212;

    
    

    int n;
    int a;
    char dir;

    int nowX = vecSize/2; // 초기값 : 100000
    int minX = vecSize/2;
    int maxX = vecSize/2;

    
    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin >> a >> dir;

        // 왼쪽으로 가면 하얀색으로 칠하기
        if(dir == 'L')
        {
            // 최솟값 갱신
            minX = minX < nowX - a ? minX : nowX - a;
            // cout << "nowx : " << nowX << endl;
            // a번만큼 칠하기
            for(int j=0; j<a; j++)
            {
                switch(vec[nowX])
                {
                    case Color_N : vec[nowX] = Color_W; break;
                    case Color_W : vec[nowX] = Color_WW; break;
                    case Color_B : vec[nowX] = Color_BW; break;
                    case Color_WB : vec[nowX] = Color_WBW; break;
                    case Color_BB : vec[nowX] = Color_BBW; break;
                    case Color_BWB : vec[nowX] = Color_G; break;
                    case Color_WBB : vec[nowX] = Color_G; break;
                    case Color_BBW : vec[nowX] = Color_G; break;
                    case Color_G : vec[nowX] = Color_G; break;
                }
                // cout << vec[nowX] << " ";
                if(j==a-1) break;
                nowX--;
            }

            // cout << endl;
        }
        // 오른쪽으로 가면 검은색으로 칠하기
        else if(dir == 'R')
        {
            // 최댓값 갱신
            maxX = maxX >= nowX + a ? maxX : nowX + a;
    //  cout << "nowx : " << nowX << endl;
                        // a번만큼 칠하기
            for(int j=0; j<a; j++)
            {
                switch(vec[nowX])
                {
                    case Color_N : vec[nowX] = Color_B; break;
                    case Color_W : vec[nowX] = Color_WB; break;
                    case Color_B : vec[nowX] = Color_BB; break;
                    case Color_BW : vec[nowX] = Color_BWB; break;
                    case Color_WW : vec[nowX] = Color_WWB; break;
                    case Color_WBW : vec[nowX] = Color_G; break;
                    case Color_WWB : vec[nowX] = Color_G; break;
                    case Color_BWW : vec[nowX] = Color_G; break;
                    case Color_G : vec[nowX] = Color_G; break;
                }
                // cout << vec[nowX] << " ";
                if(j==a-1) break;
                nowX++;
            }
            // cout << endl;
        }

        
    }

    int cnt_w = 0;
    int cnt_b = 0;
    int cnt_g = 0;

    // cout << "minx : " << minX << ", maxX : " << maxX << endl; 
    for(int i=minX; i<=maxX; i++)
    {
        // cout << vec[i] << endl;
        switch(vec[i])
        {
            case Color_W : 
            case Color_WW : 
            case Color_BW : 
            case Color_WBW : 
            case Color_BBW : 
            case Color_BWW : 
                cnt_w++; break;
            case Color_WB : 
            case Color_BWB : 
            case Color_B : 
            case Color_BB : 
            case Color_WWB : 
            case Color_WBB : 
                cnt_b++;  break;
            case Color_G : cnt_g++;  break;
        }
    }
    
    cout << cnt_w << " " << cnt_b << " " << cnt_g << endl;

    

    return 0;
}
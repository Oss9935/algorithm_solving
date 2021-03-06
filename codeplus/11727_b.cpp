/* 
 * # 11727 : 2*n 타일링 2
 * - 문제
 * 2×n 직사각형을 2×1과 2×2 타일로 채우는 방법의 수를 
 * 구하는 프로그램을 작성하시오.
 * 아래 그림은 2×17 직사각형을 채운 한가지 예이다.
 * 
 * - 입력
 * 첫째 줄에 n이 주어진다. (1 ≤ n ≤ 1,000)
 * 
 * - 출력
 * 첫째 줄에 2×n 크기의 직사각형을 채우는 방법의 수를 
 * 10,007로 나눈 나머지를 출력한다.
 *  
 * *********************************************************************************
 * 
 * # writeup
 * - 분석
 * DP 문제. d[n]=2*n 직사각형을 채우는 방법의 수.
 * 부분문제를 구하기 위해 d[n]의 시점에서 이게 어떻게
 * 만들어지냐를 생각해야 함.
 * 
 * d[n] = 2*d[n-2] + d[n-1]
 * 
 * 최소문제를 구해보먄
 * d[3] = d[2] + 2*d[1]
 * d[2] = d[1] + 2*d[0] = 3
 * 
 * 메모 + 값 리턴
 * 
 * - 생각
 * 
 * 
 * SOLVE 1> 
 * 
 * 
*/

// Solve 1
#include <iostream>
#include <vector>
using namespace std;

const int mod = 10007;

int solve(vector<int>&, int);

int main()
{
    int n;
    cin >> n;
    vector<int> d(n+1, 0);
    d[1] = 1;
    d[2] = 3;
    cout << solve(d, n);


}

int solve(vector<int> &d, int n)
{
    for(int i=3; i<=n; i++){
        d[i] = (d[i-1] + d[i-2] * 2) % mod;
    }

    return d[n];
}
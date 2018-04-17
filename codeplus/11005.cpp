/* 
 * # 11005 : 진법 변환2
 * - 문제
 * 10진법 수 N이 주어진다. 이 수를 B진법으로 바꿔 출력하는 프로그램을 
 * 작성하시오. 10진법을 넘어가는 진법은 숫자로 표시할 수 없는 자리가 있다. 
 * 이런 경우에는 다음과 같이 알파벳 대문자를 사용한다.
 * A: 10, B: 11, ..., F: 16, ..., Y: 34, Z: 35
 * 
 * - 입력
 * 첫째 줄에 N과 B가 주어진다. (2 ≤ B ≤ 36) N은 10억보다 작거나 같은 자연수이다.
 * 
 * - 출력
 * 첫째 줄에 N과 B가 주어진다. (2 ≤ B ≤ 36) N은 10억보다 작거나 같은 자연수이다.
 *  
 * *********************************************************************************
 * 
 * # writeup
 * - 분석
 * 11 = 1 * 3^2 + 0 * 3^1 + 2 * 3^0 = 102(3)
 * 29 = 1 * 3^3 + 0 * 3^2 + 0 * 3^1 + 2 * 3^0 = 1002(3)
 * 46 = 1 * 3^3 + 2 * 3^2 + 0 * 3^1 + 1 * 3^0 = 1201(3)
 *    
 *    몫
 * 1, 15
 * 0, 5
 * 2, 1
 * 1, 0
 * 
 * - 생각
 * 
 * 
 * SOLVE 1> 
 * 
 * 
*/

// Solve 1
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, b; string s;
    ios_base::sync_with_stdio( false ), cin.tie( NULL );
    cin >> n >> b;
    while(n){
        int tmp = n%b;
        if(tmp<10)
            s += to_string(n%b);
        else
            s += 'A' - 10 + tmp;
        n /= b;
    }
    reverse(s.begin(), s.end());
    cout << s;
}
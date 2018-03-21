/* 
 * # 10822 : 더하기
 * - 문제
 * 숫자와 콤마로만 이루어진 문자열 S가 주어진다. 
 * 이 때, S에 포함되어있는 자연수의 합을 구하는 프로그램을 작성하시오.
 * S의 첫 문자와 마지막 문자는 항상 숫자이고, 
 * 콤마는 연속해서 주어지지 않는다. 주어지는 수는 항상 자연수이다.
 * 
 * - 입력
 * 첫째 줄에 문자열 S가 주어진다. S의 길이는 최대 100이다. 
 * 포함되어있는 정수는 1,000,000보다 작거나 같은 자연수이다. 
 * 
 * - 출력
 * 문자열 S에 포함되어 있는 자연수의 합을 출력한다.
 *  
 * *********************************************************************************
 * 
 * # writeup
 * - 분석
 * 
 * 
 * - 생각
 * 
 * 
 * SOLVE 1> 
 * getline에서 delim은 버려지기 떄문에 신경 안써줘도 된다!
 * 
*/

// Solve 1
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    int sum = 0;
    while(getline(cin, s, ',')){
        sum += stoi(s);
    }
    printf("%d", sum);
}
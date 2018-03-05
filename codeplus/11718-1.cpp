/* 
 * # 11718 : 그대로 출력하기
 * - 문제
 * 입력 받은 대로 출력하는 프로그램을 작성하시오.
 * 
 * - 입력
 * 입력이 주어진다. 입력은 최대 100줄로 이루어져 있고, 
 * 알파벳 소문자, 대문자, 공백, 숫자로만 이루어져 있다. 
 * 각 줄은 100글자를 넘지 않으며, 빈 줄은 주어지지 않는다. 
 * 또, 각 줄은 공백으로 시작하지 않고, 공백으로 끝나지 않는다.
 * 
 * - 출력
 * 입력받은 그대로 출력한다.
 *  
 * *********************************************************************************
 * 
 * # writeup
 * - 분석
 * 반복입력 문제는 종료 조건을 명확히 파악하는것이 중요하다.
 * 일단 종료 조건은 EOF(입력 실패)이고, 각 반복을 구분하는 조건은 개행 문자가 된다. 
 * 
 * - 생각
 * SOLVE 1> 
 * C에서 개행을 기본 구분 조건으로 하는 대표적인 입출력 함수는 gets()/fgets를 활용
 * - gets : 종료 조건이 개행 문자나 EOF. 성공 시 문자열의 시작 주소, 실패 시 NULL 리턴
 * - fgets : 종료 조건이 개행 문자나 EOF 또는 지정한 사이즈까지. 
 *   성공 시 문자열의 시작 주소 리턴, 실패 시 NULL 리턴 
 * 
 * SOLVE 2>
 * scanf의 %[]을 이용.
 * 이를 이용해 \n을 포함하지 않는 문자를 입력을 받을 수 있지만,
 * 이러한 방법은 문자열 앞에 포함된 개행 문자나, 추가적인 공백을 입력받을 수 없다는 한계가 있다.
 * 하지만 위 문제는 공백으로 시작하지 않고, 공백으로 끝나지 않기 때문에 이 풀이방법을 사용할 수 있다.
 * 
 * 
*/

// Solve 1
#include <stdio.h>
#define BUF_SIZE 101
int main()
{
    char buf[BUF_SIZE] = {0, };
    while(fgets(buf, BUF_SIZE, stdin))
    {
        fprintf(stdout, "%s", buf);
    }

    return 0;
}
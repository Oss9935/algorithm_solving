#include <iostream>
using namespace std;
#include <stdio.h>

int main(int argc, char* argv[])
{
	int N;
	cin >> N;
	
	for(int i=N; i>=1; i--)
	{
		for(int j=1; j<=N; j++)
		{
			if(i <= j)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}
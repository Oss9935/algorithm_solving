#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int a, b;
        scanf("%d%*c%d", &a, &b);
        cout << a+b << '\n';
    }
}
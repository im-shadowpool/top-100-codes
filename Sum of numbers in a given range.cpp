#include <iostream>
using namespace std;
int main()
{

    int num1, num2;
    cin >> num1;
    cin >> num2;

    int ans = (num2 * (num2 + 1)) / 2 - (num1 * (num1 + 1)) / 2 + num1;

    cout << ans;

    return 0;
}

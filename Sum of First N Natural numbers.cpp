#include <iostream>
using namespace std;

int main()
{

    long int num;
    cin >> num;

    long int ans = 0;

    ans = (num * (num + 1)) / 2;

    // for (int i = 0; i <= num; i++)
    // {
    //     ans = ans + i;
    // }

    cout << "The sum of N natural numbers are: " << ans;

    return 0;
}

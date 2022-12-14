#include <iostream>
using namespace std;
int main()
{

    int num, last_digit, rev;
    cin >> num;

    while (num != 0)
    {
        last_digit = num % 10;
        num = num / 10;
        rev = rev * 10 + last_digit;
    }

    cout << rev;

    return 0;
}
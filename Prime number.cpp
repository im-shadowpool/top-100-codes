#include <iostream>
using namespace std;
int main()
{

    int num, i;
    cin >> num;

    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            cout << "Not prime number";
            break;
        }
    }

    if (i == num)
    {
        cout << "Prime number";
    }

    return 0;
}
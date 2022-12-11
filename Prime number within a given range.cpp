#include <iostream>
using namespace std;
int main()
{
    int num[10], i, count = 0;
    cin >> num[0] >> num[1];

    while (num[1] >= num[0])
    {
        for (i = 2; i < num[1]; i++)
        {

            if (num[1] % i == 0)
            {
                break;
            }
        }
        if (i == num[1])
        {
            cout << num[1] << " is a prime number" << endl;
            count++;
        }

        num[1]--;
    }

    cout << count << " Are total prime numbers";

    return 0;
}
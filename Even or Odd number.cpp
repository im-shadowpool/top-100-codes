#include <iostream>
using namespace std;

int main()
{

    int num;
    cin >> num;

    if (num & 1 == 1)
    {

        cout << "its odd number";
    }
    else
    {
        cout << "its even number";
    }
}
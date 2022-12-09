#include <iostream>
using namespace std;

int main()
{

    int num;
    cin >> num;

    if (num == 0)
    {
        cout << "its Zero";
    }

    else
    {
        num > 0 ? cout << "its Positive" : cout << "its Negative";
    }
}

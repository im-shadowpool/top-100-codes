#include <iostream>
using namespace std;
int main()
{

    int num1, num2;
    cin >> num1 >> num2;

    if (num1 == num2)
        cout << "Both are equal";
    else
        num1 > num2 ? cout << num1 << " is greater" : cout << num2 << " is greater";

    return 0;
}
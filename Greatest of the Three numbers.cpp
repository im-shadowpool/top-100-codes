#include <iostream>
using namespace std;
int main()
{

    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;

    if (num1 == num2 && num1 == num3)
        cout << "All three are equal";
    else
        (num1 > num2 && num1 > num3) ? cout << num1 << " is greater" : (num2 > num3) ? cout << num2 << " is greater"
                                                                                     : cout << num3 << " is greater";

    return 0;
}
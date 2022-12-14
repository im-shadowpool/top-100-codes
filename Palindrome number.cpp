#include<iostream>
using namespace std;
int main()
{

    int num, rev, last_digit;
    cin >> num;
    int given_num = num;

    while(num!=0){
        last_digit = num%10;
        num = num/10;
        rev = rev*10 + last_digit;
    }

    if(given_num==rev) cout << rev << " is Palindrome";
    else cout << "Not a palindrome";


 return 0;
}
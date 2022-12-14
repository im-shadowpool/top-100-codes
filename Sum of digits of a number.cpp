#include<iostream>
using namespace std;
int main()
{

int num, sum =0;
cin >> num;

while(num!=0){
    int last_digit = num%10;
    num = num/10;
    sum = last_digit + sum;
}

cout << sum;

 return 0;
}
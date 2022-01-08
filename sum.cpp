#include<iostream>
using namespace std;

void sum()
{
    int a, b;
    cout << "Enter two numbers \n";
    cin >> a >> b;
    int sum = a+b;
    cout << "\nsum of the numbers is :" << sum;
}

int main()
{
    sum();
    return 0;
}

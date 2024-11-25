#include<iostream>
using namespace std;

int main()
{
    float a, b;
    cin >> a >> b;
    
    cout.precision(10);
    cout << (long double)a / b << '\n';

    return 0;
}


#include <bits/stdc++.h>
using namespace std;
 

int divide(int dividend, int divisor)
{
 

    int sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1;
 
    dividend = abs(dividend);
    divisor = abs(divisor);
 

    int quotient = 0;
    while (dividend >= divisor) {
        dividend -= divisor;
        ++quotient;
    }
 
   
    return quotient * sign;
}

int main()
{
    int a = 10, b = 3;
    cout << divide(a, b) << "\n";
 
    a = 7, b = -3;
    cout << divide(a, b);
 
    return 0;
}
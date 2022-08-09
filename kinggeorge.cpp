//Since Question state that if there are 2 section for the  plots then 
// x = 1 y = 1 (1*1)
// x =2 y = 9 (3*3)
// x =3 y =25(5*5)
// x = 4 y = 64 (8*8)
// This is a square of fibonacci sequence
// So we can compute fibonacci sequence and the square of that
// would be out answer
// y = (fibonacci(x))^2
#include <bits/stdc++.h>

using namespace std;

class Solution
{
    public:
        int calcFibpow(int x){
            if(x<=0)
                return 0;
            if(x==1)
                return 1;
            return calcFibpow(x-1)+calcFibpow(x-2);
        }

        void  kingGeorge(int number){
            cout<< pow(calcFibpow(number+2),2)<<endl;
        }
};

int main()
{
    Solution s ;
    int n = 4;
    for(int x = 1 ; x <= n ; x++)
        s.kingGeorge(x);
    return 0;
}
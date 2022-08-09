#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char a[100];
    cin.getline(a,100);
    char s[100];
    cin.getline(s,100);
    int n;
    cin >> n;
    int charge[n];
    int count = 0;
    for(int i=0;i<strlen(a);i++){
        if(a[i] != ' ') {
            charge[count] = a[i]-48;
            count++;
        }
    }
    int sum = 0;
    for(int i=0;i<n;i++) {
        if(s[i] == 'P')
            sum += charge[i];
        else
            sum -= charge[i];
    }
    if(sum > 0) {
        cout << sum*100;
    }
    else {
        cout << -sum*100;
    }
}
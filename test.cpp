#include <bits/stdc++.h>
#include <cctype>
using namespace std;
class Solution {
public:
  
    bool isPalindrome(string str) {
        transform(str.begin(), str.end(), str.begin(), ::tolower);
     
        // Removing the non-alphanumeric characters
        str.erase(std::remove_if(str.begin(), str.end(), [](char const &c) {return !std::isalnum(c);}),str.end());

        // Creating the copy to string
        string s1 = str;
        string s2 = str;
        // Reversing the string s1
        reverse(s1.begin(), s1.end());
        cout << "S1 " << s1 << " S2 "<<s2<<endl;
        // Evaluating Result
        if(s1 == s2)
            return true;
        else
            return false;

    }
};


int main(){
    Solution s ;
    string str1 = "A man, a plan, a canal: Panama";
    string str2 = "race a car";
    string str3 = " ";
    string str = "0P";
    cout<<(s.isPalindrome(str)) << endl;
    cout<<(s.isPalindrome(str1))<<endl<<(s.isPalindrome(str2))<<endl<<(s.isPalindrome(str3));
    return 0;
}
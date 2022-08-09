#include <iostream>

using namespace std; 

int reverse_number(int number){
	bool is_negative = false;
	if(number < 0){
		is_negative = true;
		number = number * (-1);
	}
	int reverse = 0;
	while(number !=0){
		reverse = reverse*10+number%10;
		number/=10;
	}
	if(is_negative){
		return reverse*(-1);
	}
	else
		return reverse;
}
int main(){
	int number;
	cout<<"Enter a number"<<endl;
	cin >> number;

	cout<<"Reverse : " << reverse_number(number) << endl;
}

#include <iostream>
#include <vector>
using namespace std;

int jackSparrowJump(int x , int y , vector<int> wallh){
	int count,jump;
	std::vector<int> v;
	count = 0;
	for(int i : wallh){
		jump =0;
		while(jump != i ){
			jump+=x;
			count++;
			if(jump >= i){
				break;
			}
			else{
				jump-=y;	
			}
			
		}
		

	}
	return count;
}

int main(){
	vector<int> v{9,10};
	cout<<jackSparrowJump(5,1,v);
	return 0;
}

#include <bits/stdc++.h>

using namespace std;

int costFunction(int x , int y){
	if(x<y){
		return x;
	}
	else{
		return costFunction(x/y,y)+ (x%y);
	}
}

int minYValue(int x , int c){
	int y = 2;
	int ret_cost=0;
	while( y!= x){
		ret_cost = costFunction(x,y);
		if(ret_cost != c)
			y++;
		else
			break;
	}
	if(y != x)
		return y;
	else
		return -1;
}

int main(){
	cout<<minYValue(5,2)<<endl;
}
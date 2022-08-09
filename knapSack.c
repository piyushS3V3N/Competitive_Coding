/*
0,1 KnapSack Problem

N= 4 , 2^4 = 16 Combinations

{1,0,0,0},{0,1,0,0},{0,0,1,0},{0,0,0,1},
{1,1,0,0},{1,0,1,0},{1,0,0,1},{0,1,1,0},...
*/

#include <stdio.h>

int knapSack(int n , int val[] , int w , int wt[])
{
	if(n==0 || w==0){
		return 0;
	}
	if(wt[n-1] < w){
		return (val[n-1]+knapSack(n-1,val,w - wt[n-1], wt))>knapSack(n-1,val,w , wt)?(val[n-1]+knapSack(n-1,val,w - wt[n-1], wt)):knapSack(n-1,val,w , wt);
	}
	else
		return knapSack(n-1,val,w, wt);
}

int main(){
	int n =3;
	int val[]= {2,6,9};
	int w = 7;
	int wt[] = {3,5,3};
	printf("%d\n",knapSack(n,val,w,wt));
	return 0;
}
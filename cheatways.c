#include <stdio.h>


int solveTree(int n , int stud_arr[][n] , int num_fb , int fir_benpat[]  ){

	int tree_arr[n+1];
	tree_arr[0] = stud_arr[0][0];
	tree_arr[n] = -1;
	int net_path = 1;
	for(int i=0 ; i < n ; i= i+2)
	{
		tree_arr[i+1] = stud_arr[i][1];
		tree_arr[i+2] = stud_arr[i+1][1];
		
	}
	for(int i = 0 ; i <= n ; i++)
		printf("[%d] - > %d \n",i,tree_arr[i]);

	for(int i = fir_benpat[num_fb]+1 ; i < n+1 ; i++)
	{
				
			if(tree_arr[i+3] == 0  )
				return net_path;
			else{
				net_path += 1;
			}
	}
}

int main(){
	int n = 5;
	int arr[][5] = {{1,2},{1,3},{3,4},{3,5}};
	int num_fb = 1;
	int fir_benpat[] = {3};

	printf("%d\n",solveTree(n , arr, num_fb , fir_benpat));
	return 0;
}
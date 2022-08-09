#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ALL_CHARS 256
int lengthOfLongestSubstring(char * s){
	int length_str = strlen(s); // Fetching String Length
	int cur_len = 1; // Cursor length <> Current Length
	int max_len = 1; // Max length <> Final Length
	int prev_idx; // index of Previous Value 
	int *visited = (int *)malloc(sizeof(int)*ALL_CHARS);// Dynamic Array for visited characters
	//Filling The Array with -1 indicating they all are not in use indx[0-n] -1 --null
	for(int i = 0; i<ALL_CHARS ; i++)
		visited[i] = -1;
	//Adding 0th index since it would always be first character
	if(length_str != 0 )
		visited[s[0]] = 0;
	else
		return 0;

	for(int i = 1 ; i < length_str ; i++)
	{
		//Previous index = visited[s[i]]

		prev_idx = visited[s[i]];
		// if it is == -1 or current pointer i - cur_len > prev_idx increase cur_len by 1 
		// else check if cur_len > max_len true set max_len as cur_len
		// curlen = i - prev_idx
		// Update the visited to current index
		// last check for cur_len rarely checked 
		if(prev_idx == -1 || (i - cur_len) > prev_idx)
			cur_len++;
		else
		{
			if(cur_len > max_len)
				max_len = cur_len;
			cur_len = i - prev_idx;
		}
		visited[s[i]] = i ; 
		if (cur_len > max_len)
			max_len = cur_len;
		
		
	}
	// Free the memory malloc and C issues T_T
	free(visited);
	return max_len;

		
}	
	
int main(int argc , char * argv[]){
	if(argc < 2 ){
		printf("Please Enter a string !!\nUsage substr <string>");
		return -1;
	}
	
	printf("%d\n",lengthOfLongestSubstring(argv[1]));

}

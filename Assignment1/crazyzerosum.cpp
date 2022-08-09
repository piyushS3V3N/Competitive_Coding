#include <bits/stdc++.h>

using namespace std;
void checkSum(int a[] , int n, int sum ){
	
	int i;
	sort(a,a+n);

	bool flag = false;

	for(int i =0 ; i < n-2;i++){
		if(i==0 || a[i] > a[i-1]){
			int start = i+1;

			int end = n-1;

			int target = sum - a[i];
			while(start<end){
				if(start > i+1 && a[start] == a[start -1])
				{
					start++;
					continue;
				}
				if (end < n - 1   && a[end] == a[end + 1])
                {
                    end--;
                    continue;
                }
				if(target == a[start]+a[end])
				{
					cout <<"["<<a[i]<<","<<a[start]<<","<<a[end]<<"]";
					flag = true;
					start++;
					end--;
				}
				else if(target > (a[start]+a[end]))
					start++;
				else
					end--;
			}
		}
	}
	if(flag == false){
		cout<<"[]"<<endl;
	}
		
}

int main(){
	int a[] = {-1,0,1,2,-1,-4};
	int n = sizeof(a)/sizeof(a[0]);
	int sum = 0;
	checkSum(a,n,sum);
	return 0;

}

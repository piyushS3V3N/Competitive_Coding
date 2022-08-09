#include <bits/stdc++.h>
using namespace std;

//int k,n;
int x=INT_MAX;
int ar[8][2]={{0,1},{0,-1},{1,0},{-1,0},{1,-1},{-1,1},{1,1},{-1,-1}};
void dfs(int r,int c,int parent,int l,vector<vector<int>> arr,vector<vector<int>> visit ,int n, int k){
	if(k==l){
		x=min(x,parent);
		return;
	}
	visit[r][c]=1;
	for(int i=0;i<8;++i){
		int r1=r+ar[i][0];
		int c1=c+ar[i][1];
		if(r1>=0 && r1<n && c1>=0 && c1<n && arr[r1][c1]==parent && visit[r1][c1]==0){
			l =l +1;
			dfs(r1,c1,parent,l,arr,visit,n,k);
		}
	}
	return;
}
int main(){
int n,k;
cin>>n;
vector<vector<int>>visit(n,vector<int>(n,0));
vector<vector<int>>arr(n,vector<int>(n,0));
for(int i=0;i<n;++i){
	for(int j=0;j<n;++j){
		cin>>arr[i][j];
	}
}
cin>>k;
dfs(0,0,arr[0][0],1,arr,visit,n,k);
cout<<::x;
}
class itsThere {

static int ar[][] = { {0,1}, {0,-1}, {1,0}, {-1,0}, {1,-1}, {-1,1}, {1,1}, {-1,-1} };
static int x = Integer.MAX_VALUE;
public static void main(String[] args) {
	int n=5,k=2;
	int mat[][] = {{3,5,3,9,5},{4,3,2,1,8},{9,4,3,1,9},{8,4,7,6,4},{1,2,5,9,1}};
	System.out.println(driver(n,mat,k)); 
}

public static int driver(int n, int mat[][], int k) {
	int [][] visit = new int[n][n];
	dfs(0,0,mat[0][0],1,mat,visit,n,k); 
	return x;
}

public static void dfs(int r,int c,int parent,int l,int[][] mat, int[][] visit,
						int n, int k){
	if(k==l){
		x=Integer.min(x,parent);
		return ;
	}
	visit[r][c]=1;
	for(int i=0;i<8;++i){
		int r1=r+ar[i][0];
		int c1=c+ar[i][1];
		if(r1>=0 && r1<n && c1>=0 && c1<n && mat[r1][c1]==parent &&visit[r1][c1]==0) 
			dfs(r1,c1,parent,l+1,mat,visit,n,k);
	}
	return ;
}
}
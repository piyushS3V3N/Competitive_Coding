#include <bits/stdc++.h>

using namespace std;

class Solution {
	public:
		string largestMultipleOfThree(vector<int>& digits){
				vector<vector<int>> d(3);
				sort(digits.begin(), digits.end(), greater<int>());
				int sum = 0;
				for(int i=0 ; i<digits.size() ; i++){
					d[digits[i]%3].push_back(digits[i]);
					sum += digits[i];
					sum %=3;
				}
				if(sum){
				if(!d[sum].size()){
					int rem = 3 -sum;
						if(d[rem].size()<2)
							return "";
						d[rem].pop_back();
						d[rem].pop_back();

				}
				else{
					d[sum].pop_back();
				}
				}
		
		string ret = "";
		for(int i=0 ; i < 3;i++){
			for(int j=0 ; j < d[i].size();j++){
				ret +=to_string(d[i][j]);
			}
		}
		sort(ret.begin(),ret.end(), greater<int>());
		if(ret.size() && ret[0] == '0')
			return "0";
		return ret;
}};
int main(){
	Solution ob;
	vector<int> v = {7,2,8};
	cout << (ob.largestMultipleOfThree(v));
	return 0;
}

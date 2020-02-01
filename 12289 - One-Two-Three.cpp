#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	int t; cin >> t;
	string arr[4] = { "lol","one","two","three" };
	while(t--){
		string s; cin >> s;
		int d=-1,ans;
		for(int i=1;i<=3;i++){
			int c=0;
			for(int j=0;j<min(s.size(),arr[i].size());j++){
				if(s[j]==arr[i][j]) c++;
			}
			if(c>d) { d=c; ans=i; }
		}
		cout << ans << endl;
	}
}

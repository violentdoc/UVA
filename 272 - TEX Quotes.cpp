#include<bits/stdc++.h>

using namespace std;

int main(){
//	freopen("out.txt","w", stdout);
	string s;
	bool flg=0;
	while(getline(cin , s)){
		for(int i=0;i<s.size();i++){
			if(s[i]=='"'){
				if(flg==0) {
					s[i] = '`'; s.insert(s.begin()+i, '`');
					flg=1;
				}
				else {
					s[i] = '\''; s.insert(s.begin()+i,'\'');
					flg=0;
				}
			}
		}
		cout << s << endl;
	}
	return 0;
}

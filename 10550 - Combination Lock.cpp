#include<bits/stdc++.h>

using namespace std;

int main(){
//	freopen("out.txt","w", stdout);
	ios_base::sync_with_stdio(0);
	while(1){
		int n,a,b,c;
		cin >> n >> a >> b >> c;
		if(n+a+b+c==0) return 0;
		int s = 2*360;
		if(a>n) s+=((40-(a-n))*360)/40;
		else s+=((n-a)*360)/40;
		n=a;
		s+=360;
		if(b>n) s+=((b-n)*360)/40;
		else s+=((40-(n-b))*360)/40;
		n=b;
		if(c>n) s+=((40-(c-n))*360)/40;
		else s+=((n-c)*360)/40;
		cout << s << endl;
	}
}

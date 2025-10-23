//https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_2_C

#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b,c;cin>>a>>b>>c;
	if(a>b){
	    swap(a,b);
	}
	 if(a>c){
	    swap(a,c);
	}
	if(b>c){
    swap(b,c);
  }
  cout<<a<<" "<<b<<" "<<c<<endl;
  return 0;
}

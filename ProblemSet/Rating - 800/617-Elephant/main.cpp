#include <bits/stdc++.h>

using namespace std;

int main(){
	int x;
	cin>>x;
	if (x % 5 == 0){
		cout<<x/5<<endl;
	}else if(x % 4 == 0){
		cout<<x/4<<endl;
	}else if(x % 3 == 0){
		cout<<x/3<<endl;
	}else if(x % 2 == 0){
		cout<<x/2<<endl;
	}else if(x % 1 == 0){
		cout<<x/1<<endl;
	}
	return 0;
}

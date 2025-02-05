#include <bits/stdc++.h>

int main(){
	std::string x, y;
	std::cin >> x >> y;
	std::transform(x.begin(), x.end(), x.begin(), ::tolower);
	std::transform(y.begin(), y.end(), y.begin(), ::tolower);
	int res;
	
	if (x.compare(y) == 0){
		res = 0;
	}else if (x.compare(y) < 0) {
		res = -1;
	}else {
		res = 1;
	}
	
	std::cout<<res<<std::endl;
}

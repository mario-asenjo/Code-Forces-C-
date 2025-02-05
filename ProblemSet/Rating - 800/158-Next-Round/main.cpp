#include <bits/stdc++.h>

int main(){
	int n, k;
	std::vector<int> v;
	int acc = 0;
	std::cin >> n >> k;
	for (int i = 0; i < n; i++){
		int x;
		std::cin >> x;
		v.push_back(x);
	}
	for (int i : v){
		if(i > 0 && i >= v[k-1]){
			acc++;
		}
	}
	std::cout<<acc<<std::endl;
	return 0;
}

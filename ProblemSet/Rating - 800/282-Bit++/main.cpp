#include <bits/stdc++.h>

int main(){
	int len;
	std::cin>>len;

	int acc = 0;
	for (int i = 0; i < len; i++){
		std::string x;
		std::cin >> x;
		if (x.front() == '+' || x.back() == '+'){
			acc++;
		}
		if (x.front() == '-' || x.back() == '-'){
			acc--;
		}
	}
	std::cout<<acc;
	return 0;
}

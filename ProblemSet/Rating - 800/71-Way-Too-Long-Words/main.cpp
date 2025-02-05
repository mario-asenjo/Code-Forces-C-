#include <bits/stdc++.h>

int main(){
	int len;
	std::cin >> len;

	for (int i = 0; i < len; i++){
		std::string x;
		std::cin >> x;
	
		

		if (x.size() > 0 && x.size() <= 10){
			
			std::cout<<x<<std::endl;
		}
		if (x.size() > 10){
			std::cout<<x.front()<<x.size()-2<<x.back()<<std::endl;
		}
	}
	return 0;
}

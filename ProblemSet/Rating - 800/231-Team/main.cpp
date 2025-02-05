#include <bits/stdc++.h>

int main(){
	int len = 0;
	std::cin >> len;
	int acc = 0;

	for (int i = 0; i < len; i++){
		int a, b, c;
		std::cin >> a >> b >> c;
 		if(a == 1 && b == 1 || a == 1 && c == 1 || b  == 1 && c == 1){
			acc++;
		}
	}
	std::cout<<acc;
}	

#include <bits/stdc++.h>

int main(){
	std::string s;
	std::vector<int> nums;
	std::cin>>s;
	
	for(int i = 0; i < s.length(); i+=2){
		nums.push_back(s[i] - '0');
	}
	std::sort(nums.begin(), nums.end());
	for (int i = 0; i < nums.size() - 1; i++){
		std::cout<<nums[i]<<"+";
	}
	std::cout<<nums.back();
	return 0;
}

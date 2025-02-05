#include <bits/stdc++.h>

int main() {
	std::string s;
	std::cin >> s;
	std::set<char> charSet;

	for (int i = 0; i < s.length(); i++){
		charSet.insert(s[i]);
	}

	std::cout<<(charSet.size() % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!");

	return 0;
}

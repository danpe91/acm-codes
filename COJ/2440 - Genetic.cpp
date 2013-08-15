#include <iostream>
#include <cstdio>

int main() {

	short t = 0;
	
	scanf("%hd", &t);
	while(t--) {

		std::string m, n;
		std::cin >> m >> n;
		printf("%s\n", ((m.find(n) != std::string::npos) && (m.find("T") != std::string::npos)) ? "Y" : "N");

	}
}

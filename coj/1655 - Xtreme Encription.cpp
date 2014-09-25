#include <iostream>

int main() {

	std::string s, t;


	while (std::cin >> s >> t) {

		int s_size = s.length(), t_size = t.length(), found = 0;
		char c = s[found];

		for (int i = 0; i < t_size; ++i) {

			if (t[i] == c) {
				c = s[++found];
				if (found == s_size)
					break;
			}
		}

		std::cout << ((found == s_size)? ("Yes"): ("No")) << std::endl;
	}
}

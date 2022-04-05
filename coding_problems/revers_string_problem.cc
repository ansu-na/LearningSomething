// first trial to update code to github
// I learned that string can be contructed with iterators!

#include <iostream>

std::string reverse(std::string str) {
#if 0 // do not this
	for (int i = 0; i < str.size()/2; i++) {
		char tmp = str[i];
		str[i] = str[str.size()-i-1];
		str[str.size()-i-1] = tmp;
	}
	return str;
#else // let's do this
    return std::string(str.rbegin(), str.rend());
#endif
}

int main()
{
    std::cout << "" << std::endl;
    std::cout << reverse("") << std::endl;
    
    std::cout << "a" << std::endl;
    std::cout << reverse("a") << std::endl;
    
    std::cout << "ab" << std::endl;
    std::cout << reverse("ab") << std::endl;
    
    std::cout << "abc" << std::endl;
    std::cout << reverse("abc") << std::endl;
    
    return 0;
}

// https://edabit.com/challenge/HipNbqHrErSYsM63T
#include <iostream>

#include <assert.h>

std::string unmix(std::string str) {
    for (size_t i = 0; i + 1 < str.length(); i += 2) {
        char temp = str[i];
        str[i] = str[i + 1];
        str[i + 1] = temp;
    }
    return str;
}

int main()
{
    std::cout << "test starts" << std::endl;
    
    assert(unmix("a") == "a");
    assert(unmix("ab") == "ba");
    assert(unmix("badce") == "abcde");
    assert(unmix("123456") == "214365");
    assert(unmix("123456") == "214365");
    assert(unmix("hTsii  s aimex dpus rtni.g") == "This is a mixed up string.");
    
    std::cout << "test ends" << std::endl;
    return 0;
}

// solution from kvbc utilized std::swap
// https://edabit.com/user/F7crEGkD9MBYhuDa7
// it seems better to read
std::string unmix_solution(std::string s) {
	for(int i=0; i<s.length()-1; i+=2)
		std::swap(s[i],s[i+1]);
	return s;
}

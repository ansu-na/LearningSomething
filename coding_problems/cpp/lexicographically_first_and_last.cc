// https://edabit.com/challenge/Jjm5cjB8QCYEcbxJJ

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

#include <assert.h>

std::vector<std::string> firstAndLast(std::string s) {
	// sort given string and utilize reverse iterator
	sort(s.begin(), s.end());
	std::string reversed(s.rbegin(), s.rend());
	return {s, reversed};
}

int main()
{
    std::cout << "test starts" << std::endl;
    
    std::vector<std::string> expect1 = {"", ""};
    assert(firstAndLast("") == expect1);
    
    std::vector<std::string> expect2 = {"a", "a"};
    assert(firstAndLast("a") == expect2);
    
    std::vector<std::string> expect3 = {"ab", "ba"};
    assert(firstAndLast("ab") == expect3);
    
    std::vector<std::string> expect4 = {"abc", "cba"};
    assert(firstAndLast("bac") == expect4);
    
    std::vector<std::string> expect5 = {"eghimnost", "tsonmihge"};
    assert(firstAndLast("something") == expect5);
    
    std::cout << "test ends" << std::endl;
    return 0;
}

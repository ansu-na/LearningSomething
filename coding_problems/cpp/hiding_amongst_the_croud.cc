// https://edabit.com/challenge/ZWT7Ph9CWih9m9FQD

#include <iostream>
#include <algorithm>
#include <assert.h>

using namespace std;
string detectWord(string str) {
    str.erase(std::remove_if(str.begin(), str.end(),
                             [](unsigned char x) { return x >= 'A' && x <= 'Z'; }),
                             str.end());
	return str;
}

int main()
{
    std::cout << "test starts" << std::endl;
    assert(detectWord("UcUNFYGaFYFYGtNUH") == "cat");
    assert(detectWord("bEEFGBuFBRrHgUHlNFYaYr") == "burglar");
    assert(detectWord("YFemHUFBbezFBYzFBYLleGBYEFGBMENTment") == "embezzlement");
    std::cout << "test ends" << std::endl;

    return 0;
}

// solution from browing
// https://edabit.com/user/fEyo577DvG6E3Gdeg
string detectWord_sol(string str) {
	str.erase(std::remove_if(str.begin(), str.end(), ::isupper), str.end());
	return str;
}

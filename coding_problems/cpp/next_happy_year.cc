// https://edabit.com/challenge/e5QCCbgzeTptrMhdD

#include <iostream>

#include <assert.h>

// find next happy year

bool isHappyYear(int year) {
    std::string yearStr = std::to_string(year);
    for (size_t i = 0; i < yearStr.length(); i++) {
        for (size_t j = i + 1; j < yearStr.length(); j++) {
            if (yearStr[i] == yearStr[j])
                return false;
        }
    }
    return true;
}

int happyYear(int year) {
    while(!isHappyYear(++year)) ;
    return year;
}

int main()
{
    std::cout << "test starts" << std::endl;
    
    assert(happyYear(2017) == 2018);
    assert(happyYear(1990) == 2013);
    assert(happyYear(2021) == 2031);
    
    assert(happyYear(1) == 2);
    assert(happyYear(10) == 12);
    assert(happyYear(90000) == 90123);
    
    std::cout << "test ends" << std::endl;

    return 0;
}

// Solution from Werdna seems good
// https://edabit.com/user/buX4mCQhtXCfBjeno
// utilzed set to determin whether digits are unique

// actually, I thought to use set firstly but did not because loop can be more fast
// but number of digits of year is limited in real life
// so using set seems much better!

#include <set>
int happyYear(int year) {
	for (int i = year + 1;; i ++) {
		std::string str = std::to_string(i);
		std::set<char> ss(str.begin(), str.end());
		if (ss.size() == str.size()) return i;
	}
}

// https://edabit.com/challenge/XHSqdNGMug9ieiJmj

#include <iostream>

#include <assert.h>

int mystery_func(int num) {
	int result = 1;
	while (num > 1) {
	    result *= num % 10;
	    num /= 10;
	}
	return result;
}

int main()
{
    std::cout << "test starts" << std::endl;
    assert(mystery_func(152) == 10);
    assert(mystery_func(832) == 48);
    assert(mystery_func(19) == 9);
    assert(mystery_func(133) == 9);
    
    assert(mystery_func(1) == 1);
    std::cout << "test ends" << std::endl;

    return 0;
}

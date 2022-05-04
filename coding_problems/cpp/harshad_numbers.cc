// https://edabit.com/challenge/YGNyTDgNTG8cWKit4

#include <iostream>
#include <assert.h>

int getSumOfDigit(int num) {
  int sumOfDigit = 0;
	while (num > 0) {
	    sumOfDigit += num % 10;
	    num /= 10;
	}
	return sumOfDigit;
}

bool isHarshad(int num) {
	return num % getSumOfDigit(num) == 0;
}

int main()
{
    std::cout << "test starts" << std::endl;
    assert(isHarshad(209) == true);
    assert(isHarshad(41) == false);
    assert(isHarshad(12255) == true);
    std::cout << "test ends" << std::endl;

    return 0;
}

// https://edabit.com/challenge/WMrrk4zDY5vYr3Hyb

#include <algorithm>
#include <iostream>
#include <assert.h>

char getComplement(char c) {
    switch(c) {
        case 'A':
            return 'U';
        case 'U':
            return 'A';
        case 'G':
            return 'C';
        case 'C':
            return 'G';
        default:
            return '\0';
    }
}

std::string reverse_complement(std::string& input_sequence) {
	std::transform(input_sequence.begin(),
	               input_sequence.end(),
	               input_sequence.begin(),
	               getComplement);
	return std::string(input_sequence.rbegin(), input_sequence.rend());
}

int main()
{
    std::cout << "test starts" << std::endl;
    std::string input1 = "GUGU";
    assert(reverse_complement(input1) == "ACAC");
    std::string input2 = "UCUCG";
    assert(reverse_complement(input2) == "CGAGA");
    std::string input3 = "CAGGU";
    assert(reverse_complement(input3) == "ACCUG");
    std::cout << "test ends" << std::endl;

    return 0;
}

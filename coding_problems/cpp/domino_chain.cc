// https://edabit.com/challenge/2Qm488BE9EbbGh9Xt

#include <iostream>
#include <string>
#include <assert.h>

std::string dominoChain(std::string dominos) {
	for(size_t i = 0; i < dominos.length(); i++) {
		switch (dominos[i]) {
			case '|' :
				dominos[i] = '/';
				break;
			case '/':
			case ' ':
				return dominos;
			default:
				assert(false);
		}
	}
	return dominos;
}

int main()
{
    assert(dominoChain("|") == "/");
    assert(dominoChain("||") == "//");
    
    assert(dominoChain(" ") == " ");
    assert(dominoChain("  ") == "  ");
    assert(dominoChain(" /") == " /");
    assert(dominoChain(" |") == " |");
    
    assert(dominoChain("/") == "/");
    assert(dominoChain("//") == "//");
    assert(dominoChain("/ ") == "/ ");
    assert(dominoChain("/|") == "/|");
    
    return 0;
}


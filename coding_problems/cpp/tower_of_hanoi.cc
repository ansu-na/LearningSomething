// https://edabit.com/challenge/hjmadKkCtejKpvpc6
// I used recursive call to resolve solution

#include <iostream>

#include <assert.h>

int towerHanoi(int discs) {
    if (discs <= 1)
        return discs;
    return towerHanoi(discs - 1) * 2  + 1;
}

int main()
{
    std::cout << "test starts" << std::endl;
    
    assert(towerHanoi(0) == 0);
    assert(towerHanoi(1) == 1);
    assert(towerHanoi(3) == 7);
    assert(towerHanoi(5) == 31);
    
    std::cout << "test ends" << std::endl;

    return 0;
}


// solution from Jacob Weidenfeller
// https://edabit.com/user/FKNCwZyLjPXb5u3vT
// My recursive call can be represented by mathmeatical expression
// #include <cmath>
int towerHanoi_solution(int discs) {
	return pow(2, discs) - 1;
}

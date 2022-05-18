// https://edabit.com/challenge/RzcoxFfxGpgCuPxEM

#include <iostream>
#include <assert.h>

// (fAge + x) = 2 *(sAge + x)
// x = fAge - 2sAge

int ageDifference(int fAge, int sAge) {
    return abs(fAge - 2 * sAge);
}

int main()
{
    std::cout << "test starts" << std::endl;
    assert(ageDifference(36, 7) == 22);
    assert(ageDifference(55, 30) == 5);
    assert(ageDifference(42, 21) == 0);
    std::cout << "test ends" << std::endl;
    return 0;
}

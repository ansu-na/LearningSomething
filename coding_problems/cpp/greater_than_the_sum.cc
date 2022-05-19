// https://edabit.com/challenge/uCxezzuDTdN7KaGCi

#include <assert.h>

#include <algorithm>
#include <iostream>
#include <vector>

bool greaterThanSum(std::vector<int> nums) {
	int sum = 0;
	for (auto num : nums) {
	    if (num <= sum) {
	        return false;
	    }
	    sum += num;
	}
	return true;
}

int main()
{
    std::cout << "test starts" << std::endl;
    assert(greaterThanSum({2, 3, 7, 13, 28}) == true);
    assert(greaterThanSum({1, 2, 4, 6, 13}) == false);
    std::cout << "test ends" << std::endl;
    return 0;
}

// solution from browing
// https://edabit.com/user/fEyo577DvG6E3Gdeg
// used for_each
// and it seems return do not required for the for_each, so removed it here

bool greaterThanSum_sol(std::vector<int> nums) {
	int sum = 0;
	bool good = true;
	std::for_each(nums.begin(), nums.end(), 
		 [&good, &sum](const int& i) {good &= sum < i; sum += i;});
	return good;
}

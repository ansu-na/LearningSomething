// https://edabit.com/challenge/nHpWTAFjoW6oEbJEY

#include <iostream>
#include <vector>
#include <algorithm>
#include <assert.h>

bool isSubset(std::vector<int> arr1, std::vector<int> arr2) {
    // simple optimization : subset is smaller than a set
    if (arr1.size() > arr2.size()) {
        return false;
    }
    
    std::sort(arr1.begin(), arr1.end());
    std::sort(arr2.begin(), arr2.end());
    
    for (auto num : arr1) {
        if (!std::binary_search(arr2.begin(), arr2.end(), num)) {
            return false;
        }
    }
    
	return true;
}

int main()
{
    std::cout << "test starts" << std::endl;

    assert(isSubset({3, 2, 5}, {5, 3, 7, 9, 2}) == true);
    assert(isSubset({8, 9}, {7, 1, 9, 8, 4, 5, 6}) == true);
    assert(isSubset({1, 2}, {3, 5, 9, 1}) == false);
    
    assert(isSubset({}, {1}) == true);
    assert(isSubset({1}, {}) == false);

    std::cout << "test ends" << std::endl;
    return 0;
}

// solution from Marin Vlaskovski seems very good!
// used std::includes!
// https://edabit.com/user/otXtuQygbcYATMZoP
bool isSubset_sol(std::vector<int> arr1, std::vector<int> arr2) {
	std::sort(arr1.begin(),arr1.end());
	std::sort(arr2.begin(),arr2.end());
	return std::includes(arr2.begin(),arr2.end(),arr1.begin(),arr1.end());
}

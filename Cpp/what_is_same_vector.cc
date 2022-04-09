// I learned that two vector is same when it has same elements!

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> a = {1, 2};
    std::vector<int> b = {1, 3};
    std::vector<int> c = {1, 2};
    
    std::cout << (a == b) << std::endl; // false
    std::cout << (a == c) << std::endl; // true
    
    return 0;
}

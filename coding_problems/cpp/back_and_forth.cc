// 

#include <iostream>
#include <vector>
#include <assert.h>

std::string calculateArrowhead(std::vector<std::string> arr)
{
    int position = 0;
    for (auto& str : arr) {
        for (auto c : str) {
            if (c == '>') {
                position++;
            } else {
                position--;
            }
        }
    }
    if (position > 0) {
        return std::string(position, '>');
    } else if (position < 0) {
        return std::string(-1 * position, '<');
    } else {
        return "";
    }
}

int main()
{
    std::cout << "test starts" << std::endl;
    assert(calculateArrowhead({">>>>", "<", "<", "<"}) == ">");
    assert(calculateArrowhead({">", "<", ">>", "<", "<<<"}) == "<<");
    assert(calculateArrowhead({">>>>", "<<<<"}) == "");
    std::cout << "test ends" << std::endl;
    return 0;
}

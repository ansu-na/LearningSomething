// I learned that a element of a nested_vector can be accessed by using series of []

#include <iostream>
#include <vector>

int main()
{
    // 3 * 3 int matrix
    std::vector<std::vector<int>> matrix = { {1 , 2, 3} , {4, 5, 6}, {7, 8, 9} };
    std::cout << matrix[0][0] << std::endl;
    std::cout << matrix[1][1] << std::endl;
    std::cout << matrix[2][2] << std::endl;

    return 0;
}

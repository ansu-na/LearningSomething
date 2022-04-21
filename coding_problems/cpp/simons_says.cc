// https://edabit.com/challenge/GJT6RyivEHh3onNq4
// check second array is shifed by one element in right way

bool simonSays(std::vector<int> arr1, std::vector<int> arr2) {
    for (int i = 0; i < arr1.size() - 1; i++) {
        if (arr1[i] != arr2[i + 1]) {
            return false;
        }
    }
    return true;
}

// solution from gumdaddy
// https://edabit.com/user/oYLjFnZkke7z7q476
// I learned that how to simplify the code by using operator!
bool simonSays(std::vector<int> arr1, std::vector<int> arr2)
{
    arr1.pop_back();
    arr2.erase(arr2.begin());
    return arr1 == arr2;
}

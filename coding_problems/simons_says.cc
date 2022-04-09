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

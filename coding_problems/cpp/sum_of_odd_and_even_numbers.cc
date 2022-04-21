// https://edabit.com/challenge/XmPeXa5fzwxkpvRhz

std::vector<int> sumOddAndEven(std::vector<int> arr) {
  int even_sum = 0;
  int odd_sum = 0;
	for (int num : arr) {
		if (num % 2 == 0) {
			even_sum += num;
		} else {
			odd_sum += num;
		}
	}	
	return std::vector<int>{even_sum, odd_sum};
}

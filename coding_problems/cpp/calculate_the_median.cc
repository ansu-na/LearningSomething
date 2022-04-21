// https://edabit.com/challenge/iuXEXDGarZ9MxSyZ8
// calculate an median from given series of integers

float median(std::vector<int> arr) {
	sort(arr.begin(), arr.end());
	auto size = arr.size();
	if (size % 2 == 0) {
		return static_cast<float>(arr[size / 2 - 1] + arr[size / 2]) / 2;
	} else {
		return arr[size / 2];
	}
}

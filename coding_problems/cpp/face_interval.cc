// https://edabit.com/challenge/p3wNXd3jpBp4SX6kx
// find a interval from array, and check the array contains the interval as element

std::string faceInterval(std::vector<int> num) {
	std::sort(num.begin(), num.end());
	int interval = abs(num[0] - num[num.size() - 1]);
	if (std::binary_search(num.begin(), num.end(), interval)) {
		return ":)";
	}	else {
		return ":(";
	}	
}


// My solution changed order, but there can be other way to resolve this
// Just solution from lurkyLurker
// https://edabit.com/user/nMxZsNQ6btmmevxfj
std::string faceInterval(std::vector<int> num) {
	auto minmax = std::minmax_element(num.begin(), num.end());
	return std::find(num.begin(), num.end(), *minmax.second - *minmax.first) == num.end() ? ":(" : ":)";
}

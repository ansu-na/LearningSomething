// https://edabit.com/challenge/t9r8hrgqHmWwWe4bi

std::vector<std::string> pingPong(std::vector<std::string> arr, bool win) {
	std::vector<std::string> result;
	for (auto& str : arr) {
		result.push_back(str);
		result.push_back("Pong!");
	}
	if (!win) {
		result.pop_back();
	}
	return result;
}

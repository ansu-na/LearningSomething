// https://edabit.com/challenge/HXGx9oXukEgsFK6PH
// reverse given string with recursive call

std::string reverse(std::string str) {
	if (str.empty())
		return str;
	auto last = str.back();
	str.pop_back();
	return last + reverse(str);
}

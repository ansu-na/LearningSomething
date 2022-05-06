// https://edabit.com/challenge/Qs75Qjvw4TWiBDyh2

std::string wormLength(std::string worm) {
	if (worm.empty())
		return "invalid";
	for (int i = 0; i < worm.length(); i++) {
		if (worm[i] != '-') {
			return "invalid";
		}
	}
	
	return std::to_string(worm.length() * 10) + " mm.";;
}

// solution from StillGreen-san
// https://edabit.com/user/qajh5oWg7PDC7pr37
// simple solution by using library, std::string::find_first_not_of()
std::string wormLength(const std::string& worm) {
	size_t segments = worm.size();
	if(segments == 0 || worm.find_first_not_of('-') != std::string::npos)
		return "invalid";
	return std::to_string(segments * 10).append(" mm.");
}

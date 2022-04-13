// https://edabit.com/challenge/G3hRLmmrcMaGAbf6F

std::string owofied(std::string sentence) {
	for (int pos = 0; pos < sentence.length(); pos++) {
		if (sentence[pos] == 'i' || sentence[pos] == 'e') {
			sentence.insert(pos, "w");
			pos++;
		}
	}
	sentence += " owo";
	return sentence;
}

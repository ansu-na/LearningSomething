// https://edabit.com/challenge/5KAsvzdc9DLfEx65t
// returns all elements which is greater than thier adjacent neighbors

using namespace std;

vector<int> miniPeaks(vector<int> arr) {
	vector<int> result;
	for (auto it = arr.begin() + 1; it != arr.end() - 1; it++) {
		if (*it > *(it - 1) && *it > *(it + 1))
			result.push_back(*it);
	}
	return result;
}

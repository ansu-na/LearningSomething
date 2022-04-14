// https://edabit.com/challenge/Hwa3x8E3xyyauHJdk
// return triagle type among "scalene", "isosceles", "equilateral" if number of elements is 3.
// if not, return "not a triangle"

std::string getTriangleType(std::vector<int> arr) {
	if (arr.size() != 3) {
		return "not a triangle";
	}
	
	if (arr[0] == arr[1]) {
		return (arr[1] == arr[2]) ? "equilateral" : "isosceles";
	} else {
		if (arr[1] == arr[2]) {
			return "isosceles";
		} else {
			return (arr[0] == arr[2]) ? "isosceles" : "scalene";
		}
	}
}

// I used conventional if condition, but using set seems much more simple!
// the solution from Jidoct
// https://edabit.com/user/RnY25enEBE8T9P5GS

#include <set>
std::string getTriangleType(std::vector<int> a) {
	if(a.size()==3)
	{
		std::set<int> b {begin(a),end(a)};
		switch(b.size())
		{
			case 1: return "equilateral";
			case 2: return "isosceles";
			case 3: return "scalene";
		}
	}
	return "not a triangle";
}

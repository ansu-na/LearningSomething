// https://edabit.com/challenge/kkyKnXoSqtbGnmqah
// tried to find solution with recursion

int tetra(int n) {
	if (n == 1) {
		return 1;
	}	
	return (n * (n + 1)) / 2 + tetra(n - 1);
}


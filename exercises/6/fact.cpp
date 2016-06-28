int fact(int n) {
	int result = n;
	if (n == 0)
		return 1;
	while(--n) {
		result *= n;
	}
	return result;
}
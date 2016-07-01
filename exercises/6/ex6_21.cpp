int compare(int num1, const int* ptr1)
{
	if (num1 >= *ptr1)
		return num1;
	return *ptr1;
}
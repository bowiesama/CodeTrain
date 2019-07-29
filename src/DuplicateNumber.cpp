#include "iostream"
bool duplicate(int numbers[], int length)
{
	if (numbers == nullptr || length <= 0)
		return false;
	for (int i = 0; i < length; i++)
	{
		if (numbers[i] < 0 || numbers[i] > length - 1)
			return false;
		while (numbers[i] != i)
		{
			if (numbers[i] == numbers[numbers[i]])
			{
				std::cout << "duplicate number is\t" << numbers[i] << std::endl;
				return true;
			}
			//swap numbers[i] and numbers[numbers[i]]
			int temp = numbers[i];
			numbers[i] = numbers[temp];
			numbers[temp] = temp;
		}
	}
	return false;
}

/*int main()
{
	int numbers[10] = { 0, 1, 1, 2, 3, 4, 6, 7, 5, 1 };
	bool isDuplicate = duplicate(numbers, 10);
	return 0;
}*/

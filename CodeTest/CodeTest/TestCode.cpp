#include "iostream"
#include "vector"
using namespace std;
/*int main()
{
	int a = 0;
	int b = 0;
	while (cin >> a >> b)
	{
		cout << a + b << endl;
	}
}*/
//--------------------------------------------------------------------------
/*extern void swap_with_zero(int* array, int len, int n);
class Solution {
public:
	/**
	 * 调用方法swap_with_zero来对array进行排序
	 */
	/*void sort(int* array, int len) {
		int temp = 0;
		int index = 1;
		swap_with_zero(array, len, array[0]);
		while (index < len)
		{
			while (array[index] != index)
			{
				temp = array[index];
				swap_with_zero(array, len, temp);
				swap_with_zero(array, len, array[temp]);
				swap_with_zero(array, len, temp);
			}
			index++;
		}
	}
};*/
//
//-------------------------------------------------------------//
/*
int maxScore(vector<int> score, int head, int tail)
{
	int length = score.size();
	int max = 0;
	if (head > tail)
	{
		int temp = head;
		head = tail;
		tail = temp;
	}
	if (head == tail)
		max = score[head - 1];
	for(int i = head - 1; i < tail - 1; i++)
	{
		if (score[i] > max)
			max = score[i];
	}
	return max;
}
int main()
{
	//Get numbero of student and option
	int stuNum = 0;
	int opNum = 0;
	int score = 0;
	cin >> stuNum >> opNum;
	//Get score of stu
	if (stuNum <= 0 || opNum < 0)
		return -1;
	vector<int> scoreList;
	vector<int> res;
	for (int i = 0; i < stuNum; i++)
	{
		scanf_s(" %d", &score);//notice space
		scoreList.push_back(score);
	}
	// Get option
	{
		char opType;
		int paramA;
		int paramB;
		int count = 0;
		while (cin >> opType >> paramA >> paramB)
		{
			if (opType == 'Q')
			{
				int maxmun = maxScore(scoreList, paramA, paramB);
				res.push_back(maxmun);
			}
			else if (opType == 'U')
			{
				scoreList[paramA - 1] = paramB;
			}
			else
				return -1;
			count++;
			if (count == opNum)
				break;
		}
		
	}
	int res_size = res.size();
	for (int m = 0; m < res_size; m++)
	{
		cout << res[m] << endl;
	}

	return 0;
}*/
int main()
{
	return 0;
}
#include <iostream>
using namespace std;

int ArrayAdd(int* list, int b)
{
	int result = 0;

	for (int i = 0; i < b; i++)
	{
		result += list[i];
	}

	return result;
}

void ArraySort(int list[], int n)
{
	int temp;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (list[i] < list[j])
			{
				temp = list[j];
				list[j] = list[i];
				list[i] = temp;
			}
		}
	}
}

int main()
{
	int n = 0;
	cin >> n;

	int* arr = new int[n];


	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	cout << ArrayAdd(arr, n);

	ArraySort(arr, n);

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << endl;
	}

	delete[] arr;
	return 0;
}
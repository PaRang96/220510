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

//void ArraySort(int list[], int n)
//{
//	for (int i = 0; i < i++)
//}

int main()
{
	int n = 0;
	cin >> n;

	int* arr = new int[n];


	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	cout << ArrayAdd(arr,n);

	//ArraySort(arr, n);

	/*for (int i = 0; i < n; i++)
	{
		cout << arr[i] << endl;
	}*/

	delete[] arr;
	return 0;
}

#include <ctime>
#include <iostream>
#include <cstdlib>
#include <time.h>
#include <windows.h>
using namespace std;
int main()
{
	srand(time(NULL));
	int size;
	cout << "Podaj ilosc liczb do losowania: " << endl;
	cin >> size;
	int * array = new int[size];
	cout << "Wylosowane liczby to: ";

	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % 100;
		cout << array[i] << " ";

	}
	cout << endl << endl;
	cout << "Sortowanie wylosowanych liczb: ";

	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(array[j], array[j + 1]);
			}
		}
	}

	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}

	int min = array[0];
	for (int i = 0; i < size; i++)
		if (min > array[i])
			min = array[i];
	cout << endl << endl;
	cout << endl << "Najmniejsza liczba w zbiorze to: " << min;
	cout << endl << endl;
	int max = array[0];
	for (int i = 0; i < size; i++)
		if (max < array[i])
			max = array[i];
	cout << endl << "Najwieksza liczba w zbiorze to: " << max;

	cout << endl << endl;

	float tmp = 0;
	for (int i = 0; i < size; i++)
	{
		tmp += array[i];
	}
	float avg = tmp / size;

	cout << "Srednia wartosc arytmetyczna: " << avg;
	cout << endl << endl;
	cout << endl << endl;
	return 0;
}
#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;
//задание 1 линейный поиск
/*
int linSearch(int arr[], int key, int size) {
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == key)
			return i;
	}
	return -1;
}
void showArr(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i]<<" ";
		if ((i + 1) % 10 == 0)
		{
			cout << endl;
		}
	}
	cout << endl;
}
void line() {
	const int size = 10;
	int a[size];
	int key = 0;
	int nEl = 0;
	for (int i = 0; i < size; i++)
	{
		a[i] = 1 + rand() % 10;
	}
	showArr(a, size);
	cout << "Какое число необходимо искать? ";
	cin >> key;
	nEl = linSearch(a, key, size);
	if (nEl != -1)
	{
		//если в массиве найдено искомое число - выводим индекс элемента на экран
		cout << "Значение " << key << " находится в ячейке с индексом: " << nEl << endl;
	}
	else
	{
		//если в массиве не найдено искомое число
		cout << "В массиве нет такого значения" << endl;
	}
}

int main(){
	setlocale(LC_ALL, "");
	line();
}
*/
//задание 2 бинарный поиск
/*
int BinSearch(const int* arr, int count, int key);

int main()
{
	const int n = 5;
	int arr[n] = { 1, 2, 3, 4, 5 };
	int key;

	cout << "key: ";
	cin >> key;

	if (BinSearch(arr, n, key) != -1)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

	return 0;
}

int BinSearch(const int* arr, int count, int key)
{
	int l = 0;            // нижняя граница
	int u = count - 1;    // верхняя граница

	while (l <= u) {
		int m = (l + u) / 2;
		if (arr[m] == key) return m;
		if (arr[m] < key) l = m + 1;
		if (arr[m] > key) u = m - 1;
	}
	return -1;
}
*/
//Задание 3 двоичный в десятичный
/*
int convert(long long);

int main() {
	setlocale(LC_ALL, "");
	long long n;
	cout << "Введите двочиный код пример(0101)\n";
	cin >> n;
	cout<<"Двочиный код "<< n<< " В десятичном " << convert(n);
	return 0;
}
int convert(long long n) {
	int dec = 0, i = 0, rem;
	while (n != 0) {
		rem = n % 10;
		n /= 10;
		dec += rem * pow(2, i);
		++i;
	}

	return dec;
}
*/
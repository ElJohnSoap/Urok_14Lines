/*Пользователь вводит отдельно строку и символ, необходимо показать на экран номера по порядку всех
совпадений (нумерация с единицы).*/
#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	const int size = 256;
	char string[size];
	cout << "Ведите строку: ";
	gets_s(string);
	char n;
	cin >> n;
	int i;
	for (i = 0; i < strlen(string); i++)
	{
		if (string[i] == n)
			cout << i + 1 << endl;
	}

	cout << endl;

	return 0;

}

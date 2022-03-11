/*Показать на экран с m по n символов строки, введенной
пользователем и записать данный отрезок в другой
массив. (m и n также вводятся пользователем)*/

#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;


int main()
{
	setlocale(LC_ALL, "ru");
	const int size = 256;
	char string[size], string2 [size];
	cout << "Ведите строку: ";
	gets_s(string);
	char n, m;
	cin >> n >> m;
	char* one = strchr(string, n);
	char* end = strrchr(string, m);
	cout << one << endl;
	int p = strlen(one) - strlen(end);
	//cout << p;
	*string2 = NULL;
	strncat_s(string2, one, p);
	
	puts(string2);
	
	return 0;

}


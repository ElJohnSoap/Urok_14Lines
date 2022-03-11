/*Удалить с m по n символов, перезаписать строку и показать ее на экран.*/

#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	const int size = 256;
	char string[size], string2[size];
	cout << "Ведите строку: ";
	gets_s(string);
	char n, m;
	cin >> n >> m;
	char* one = strchr(string, n);
	char* end = strrchr(string, m);
	//cout << one << endl;
	*one = NULL;
	puts(string);
	strcat_s(string, end);

	puts(string);

    return 0;
}

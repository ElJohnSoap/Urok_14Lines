/*������������ ������ ������ � ���������� � ������������� ������. ���������� ���������, �������
��������� ������� ������ ������ � ������� ��������.*/

#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
const int MAXLEN = 256;


int main()
{
	char string[MAXLEN]; /* ����� ��� 255 ��������. */
	cout << "Input string:: ";
	gets_s(string);
	cout << endl;
	cout << string << endl;
	int length = strlen(string);
	cout << "Length string = " << length << endl;
	cout << "Freely in the array: " << MAXLEN - length << endl;
	return 0;
}
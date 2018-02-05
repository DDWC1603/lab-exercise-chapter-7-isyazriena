//intan syazriena binti mohd. shahidon
//a17dw2281
//if the day is sunday, what day is it?
//write your code using enum and Sunday is your default 'day'

#include <iostream>
using namespace std;

enum minggu {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};

int main ()
{
	minggu hariIni;
	hariIni = Sunday;

	cout << "Hari ke-" << hariIni+1;
	return 0;
}


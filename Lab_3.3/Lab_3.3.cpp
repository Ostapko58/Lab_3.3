// Lab_03_3.cpp
// < Онишківа Остапа >
// Лабораторна робота No 3.3
// Розгалуження, задане графіком функції.
// Варіант 5

#include<iostream>
#include<cmath>
using namespace std;

int main() 
{
	double x; // вхідний аргумент
	double y; // вхідний аргумент
	double R; // результат обчислення виразу

	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;
	 
	if (x<=-2)
	{
		y = x + 3;
		cout << "x<=-2" << endl;
	}
	else
		if (x>-2 && x<=4)
		{
			y = 1 - ((R + 1) * (x + 2)) / 6;
			cout << "x>-2 && x<=4" << endl;
		}
		else
			if (x>4 && x<=8-R)
			{
				y = -R;
				cout << "x>4 && x<=8-R" << endl;
			}
			else
				if (x>8-R && x<=8+R)
				{
					y = -R + sqrt(R * R - (x - 8) * (x - 8));
					cout << "x>8-R && x<=8+R" << endl;
				}
				else
				{
					y = -R;
					cout << "x>8+R" << endl;
				}

	cout << "y = " << y << endl;
	
	return 0;
}
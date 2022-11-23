#include <iostream>
using namespace std;

int Sum(int a, int b);               // Прототип функции (Оьявление функции - Function declaration)
int Differenve(int a, int b);
int Product(int a, int b);
int Quotiht(int a, int b);

void main()
{
	setlocale(LC_ALL, "Rus");

	int a, b;

	cout << "Введите два чила: "; cin >> a >> b;

	int c = Sum(a, b); // Вызов функции - Function call
	// Too few arguments in function call
	// Too many arguments in function call  

	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Differenve(a, b) << endl;
	cout << a << " * " << b << " = " << Product(a, b) << endl;
	cout << a << " / " << b << " = " << Quotiht(a, b) << endl;
}

int Sum( int a, int b ) // Реализация функции (Опредение функции - Funсtion definition)
{
	int sum = a + b;
	return sum;
}

int Differenve(int a, int b)

{
	return a - b;
}
int Product(int a,int b)
{
	return a *b;
}

int Quotiht(int a, int b)
{
	return (double) a / b;
}


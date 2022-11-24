#include<iostream>
using namespace std;

const int ROWS = 3;
const int COLS = 4;

void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(float arr2[], const int b);
void FillRand(char arr3[], const int c);
void OffsetL(int arr[], const int n);
void OffsetL(double arr[], const int n);
void OffsetL(float arr1[], const int n);
void OffsetL(char arr[], const int n);
void OffsetR(int arr[], const int n);
void OffsetR(double arr[], const int n);
void OffsetR(float arr[], const int n);
void OffsetRt(char arr[], const int n);

void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(float arr2[], const int b);
void Print(char arr3[], const int c);

void Sort(int arr[], const int n);
void Sort(double arr[], const int n);
void Sort(float arr2[], const int b);
void Sort(char arr3[], const int c);

int  Sum(int arr[], const int n);
double Sum(double arr[], const int n);
float Sum(float arr2[], const int b);
char Sum(char arr3[], const int c);

double AVG(int arr[], const int n);
double AVG(double arr[], const int n);
float AVG(float arr2[], const int b);
char AVG(char arr3[], const int c);

int minValueIn(int arr[], const int n);
double minValueIn(double arr[], const int n);
float minValueIn(float arr2[], const int b);
char minValueIn(char arr3[], const int c);

int maxValueIn(int arr[], const int n);
double maxValueIn(double arr[], const int n);
float maxValueIn(float arr2[], const int b);
char maxValueIn(char arr3[], const int c);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	int arr1[n];
	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);

	for (int i = 0; i < n; i++)
	{
		arr1[i] = arr[i];
	}

	OffsetL(arr1, n);
	OffsetR(arr, n);
	cout << "����� ��������� �������: " << Sum(arr, n) << endl;
	cout << "�������-�������������� ��������� �������: " << AVG(arr, n) << endl;
	cout << "����������� �������� � �������: " << minValueIn(arr, n) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(arr, n) << endl;
	cout << "����������� ������  double:" <<endl;

	const int SIZE = 8;
	double brr[SIZE];
	double brr1[SIZE];
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	Sort(brr, SIZE);
	Print(brr, SIZE);

	for (int i = 0; i < SIZE; i++)
	{
		brr1[i] = brr[i];
	}

	OffsetL(brr1, SIZE);
	OffsetR(brr, SIZE);

	cout << "����� ��������� �������: " << Sum(brr, SIZE) << endl;
	cout << "�������-�������������� ��������� �������: " << AVG(brr, SIZE) << endl;
	cout << "����������� �������� � �������: " << minValueIn(brr, SIZE) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(brr, SIZE) << endl;
	cout << "���������� ������:" <<endl;
	

	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);

	cout << endl;

	cout << "���������� ������  float:" << endl;
	const int b = 5;
	float arr2[b];
	float arrl[b];
	FillRand(arr2, b);
	Print(arr2, b);
	Sort(arr2, b);
	Print(arr2, b);

	for (int i = 0; i < b; i++)
	{
		arrl[i] = arr2[i];
	}

	OffsetL(arrl, b);
	OffsetR(arr2, b);
	cout << "����� ��������� �������: " << Sum(arr2, b) << endl;
	cout << "��. �����. ��������� �������: " << AVG(arr2,b) << endl;
	cout << "�����. ����. ��������� �������: " << minValueIn(arr2, b) << endl;
	cout << "����. ����. ��������� �������: " << maxValueIn(arr2, b) << endl << endl;

	cout << "���������� ������ ���� char:" << endl;
	const int c = 7;
	char arr3[c];
	char arr_11[c];
	FillRand(arr3, c);
	Print(arr3, c);
	Sort(arr3,c);
	Print(arr3, c);

	for (int i = 0; i < b; i++)
	{
		arr_11[i] = arr3[i];
	}

	OffsetL(arr_11, c);
	OffsetR(arr,c);

	cout << "����� ��������� �������: " << Sum(arr, c) << endl;
	cout << "��. �����. ��������� �������: " << AVG(arr,c) << endl;
	cout << "�����. ����. ��������� �������: " << minValueIn(arr, c) << endl;
	cout << "����. ����. ��������� �������: " << maxValueIn(arr, c) << endl << endl;
}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
		//������� rand() ���������� ��������������� ����� � ��������� �� 0 �� 32 767 (MAX_RAND)
	}
}
void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10000;
		arr[i] /= 100;
		//������� rand() ���������� ��������������� ����� � ��������� �� 0 �� 32 767 (MAX_RAND)
	}
}
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}

void FillRand(float arr2[], const int b)
{
	for (int i = 0; i < b; i++)
	{
		arr2[i] = rand() % 1000;
		arr2[i] /= 10;
	}
}
void FillRand(char arr3[], const int c)
{
	for (int i = 0; i < c; i++)
	{
		arr3[i] = rand() % 1000;
	}
}

void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
void Print(float arr2[], const int b)
{
	for (int i = 0; i < b; i++)
	{
		cout << arr2[i] << "\t";
	}
	cout << endl;
}
void Print(char arr3[], const int c)
{
	for (int i = 0; i < c; i++)
	{
		cout << arr3[i] << "\t";
	}
	cout << endl;
}

void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)	//������� 'i' �������� �������, � ������� ����� ��������� ����������� ��������
	{
		for (int j = i + 1; j < n; j++)//������� 'j' ���������� ���������� �������� �������.
		{//������� �������� � ��������, ���������� �� ���������
			//arr[i] - ��������� �������
			//arr[j] - ������������ �������
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(double arr[], const int n)
{
	for (int i = 0; i < n; i++)	//������� 'i' �������� �������, � ������� ����� ��������� ����������� ��������
	{
		for (int j = i + 1; j < n; j++)//������� 'j' ���������� ���������� �������� �������.
		{//������� �������� � ��������, ���������� �� ���������
			//arr[i] - ��������� �������
			//arr[j] - ������������ �������
			if (arr[j] < arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(float frr[], const int m)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = i + 1; j < m; j++)
		{
			if (frr[j] < frr[i])
			{
				float bufer = frr[i];
				frr[i] = frr[j];
				frr[j] = bufer;
			}
		}
	}
}
void Sort(char arr3[], const int c)
{
	for (int i = 0; i < c; i++)
	{
		for (int j = i + 1; j < c; j++)
		{
			if (arr3[j] < arr3[i])
			{
				float bufer = arr3[i];
				arr3[i] = arr3[j];
				arr3[j] = bufer;
			}
		}
	}
}


int  Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Sum(double arr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
float Sum(float arr2[], const int b)
{
	float sum = 0;
	for (int i = 0; i < b; i++)
	{
		sum += arr2[i];
	}
	return sum;
}
char Sum(char arr3[], const int c)
{
	char sum = 0;
	for (int i = 0; i < c; i++)
	{
		sum += arr3[i];
	}
	return sum;
}

double AVG(int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
double AVG(double arr[], const int n)
{
	return Sum(arr, n) / n;
}
float AVG(float arr2[], const int b)
{
	return (float)Sum(arr2, b) / b;
}
char AVG(char arr3[], const int c)
{
	return (float)Sum(arr3, c) / c;
}


int minValueIn(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
double minValueIn(double arr[], const int n)
{
	double min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
float minValueIn(float arr2[], const int b)
{
	float min = arr2[0];
	for (int i = 0; i < b; i++)
	{
		if (arr2[i] < min)
		{
			min = arr2[i];
		}
	}
	return min;
}
char minValueIn(char arr3[], const int c)
{
	char min = arr3[0];
	for (int i = 0; i < c; i++)
	{
		if (arr3[i] < min)
		{
			min = arr3[i];
		}
	}
	return min;
}
int maxValueIn(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
double maxValueIn(double arr[], const int n)
{
	double max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
float maxValueIn(float arr2[], const int b)
{
	float max = arr2[0];
	for (int i = 0; i < b; i++)
	{
		if (arr2[i] > max)
		{
			max = arr2[i];
		}
	}
	return max;
}
char maxValueIn(char arr3[], const int c)
{
	char max = arr3[0];
	for (int i = 0; i < c; i++)
	{
		if (arr3[i] > max)
		{
			max = arr3[i];
		}
	}
	return max;
}

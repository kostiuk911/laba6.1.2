#include <iostream> 
#include <iomanip> 
#include <time.h> 
using namespace std;
void mas(int* c, const int size, const int max, const int min, int i)
{
    c[i] = min + rand() % (max - min + 1);
	cout << c[i] << " ";
	if (i < size - 1)
		mas(c, size, max, min, i + 1);
}
void sum(int* c, const int size, int i, int S)
{
	if ((c[i] % 2 != 0) || (i % 13 != 0))
	{
		S += c[i];
	}
	if (i < size - 1)
		sum(c, size, i + 1, S);
	else {
		cout << endl;
		cout << "Sum = " << S << endl;
	}
}
void count(int* c, const int size, int i, int C)
{
	if ((c[i] % 2 != 0) || (i % 13 != 0))
	{
		C++;
	}
	if (i < size - 1)
		count(c, size, i + 1, C);
	else {
		cout << endl;
		cout << "Count = " << C << endl;
	}
}
void obn(int* c, const int size, int i)
{
	if ((c[i] % 2 != 0) || (i % 13 != 0))
	{
		c[i] = 0;
	}
	cout << c[i] << " ";
	if (i < size - 1)
		obn(c, size, i + 1);
}
int main()
{
	srand((unsigned)time(NULL));
	const int n = 21;
	int r[n];
	int i = 0;
	int S = 0;
	int C = 0;
	int max = 85;
	int min = 15;
	mas(r, n, max, min, i);
	sum(r, n, i, S);
	count(r, n, i, C);
	obn(r, n, i);
	return 0;
}
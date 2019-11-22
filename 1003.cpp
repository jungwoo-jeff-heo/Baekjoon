#include "Common_hjw.h"

using namespace std;

int fibonnacci(int n);

int main()
{
	do
	{
		unsigned int nNum_0 = 0;
		unsigned int nNum_1 = 0;
		unsigned int unTarget = 0;

		cout << "input number" << endl;
		cin >> unTarget;

		CHECK_NATURE_NUMBER(unTarget)
	} while (1);

	system("pause");
	return 0;
}

int fibonnacci(int n)
{
	if (n == 0)
	{
		printf("0\n");
		return 0;
	}
	else if (n == 1)
	{
		printf("1\n");
		return 1;
	}
	else
	{
		return fibonnacci(n - 1) + fibonnacci(n - 2);
	}
}
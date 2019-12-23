#include <iostream>

using namespace std;

unsigned int fibonnacci(int n);
unsigned int arratFibonacci[41] = {};

int main()
{
	arratFibonacci[0] = 0;
	arratFibonacci[1] = 1;

	int nTestCase = 0;
	int nTarget = 0;

	cin >> nTestCase;

	while (nTestCase-- > 0)
	{
		cin >> nTarget;

		if (nTarget == 0)
		{
			printf("%d %d\n", 1, 0);
		}
		else if (nTarget == 1)
		{
			printf("%d %d\n", 0, 1);
		}
		else
		{
			fibonnacci(nTarget);
			printf("%u %u\n", arratFibonacci[nTarget - 1], arratFibonacci[nTarget]);
		}
	}

	return 0;
}

unsigned int fibonnacci(int n)
{
	if (n <= 0)
		return arratFibonacci[0];
	else if (arratFibonacci[n] == 0)
	{
		arratFibonacci[n] = fibonnacci(n - 1) + fibonnacci(n - 2);
		return arratFibonacci[n];
	}
	else
		return arratFibonacci[n];
}

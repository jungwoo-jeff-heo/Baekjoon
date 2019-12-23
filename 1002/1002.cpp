#include <iostream>

using namespace std;

int main()
{
	int x1, x2, y1, y2, r1, r2, t, d, l, b, ans;

	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		d = (x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2);
		l = (r1 - r2)*(r1 - r2);
		b = (r1 + r2)*(r1 + r2);

		if (d == 0 && (r1 == r2)) ans = -1;
		else if (d<l || d>b) ans = 0;
		else if (d == l || d == b) ans = 1;
		else ans = 2;

		cout << ans << endl;
	}
	return 0;
}
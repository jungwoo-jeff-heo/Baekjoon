#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

struct stStar
{
	int x;
	int y;
	int r;
	stStar() {}
	stStar(int x, int y, int r) : x(x), y(y), r(r) {}
	bool operator == (stStar s)
	{
		return (x == s.x && y == s.y && r == s.r);
	}
	bool operator < (stStar s)
	{
		return (r < s.r);
	}
}star[50];

int dist(int i_x, int i_y, int i_rx, int i_ry)
{
	return (((i_x - i_rx)*(i_x - i_rx) + (i_y - i_ry)*(i_y - i_ry)));
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int nTestCase, nStar;
	vector<stStar> s, e;
	int sx, sy, ex, ey;

	cin >> nTestCase;

	for (int i = 0; i < nTestCase; i++)
	{
		sx = 0;
		sy = 0;
		ex = 0;
		ey = 0;
		nStar = 0;
		memset(star, 0, sizeof(star));
		s.clear();
		e.clear();
		
		cin >> sx >> sy >> ex >> ey >> nStar;

		for (int j = 0; j < nStar; j++)
		{
			cin >> star[j].x >> star[j].y >> star[j].r;

			if ( dist(sx, sy, star[j].x, star[j].y) < (star[j].r*star[j].r) )
			{
				s.push_back(star[j]);
			}
			if (dist(ex, ey, star[j].x, star[j].y) < (star[j].r*star[j].r))
			{
				e.push_back(star[j]);
			}
			sort(s.begin(), s.end());
			sort(e.begin(), e.end());
		}

		int nS = 0;
		int nE = 0;
		int nRet = 0;

		while (nS < s.size() && nE < e.size() )
		{
			if (s[nS] == e[nE])
				break;
			else
			{
				nRet++;
				if (s[nS].r <= e[nE].r)
					nS++;
				else if (s[nS].r > e[nE].r)
					nE++;
			}
		}

		if (nS == s.size())
		{
			nRet += e.size() - nE;
		}
		if (nE == e.size())
		{
			nRet += s.size() - nS;
		}
		cout << nRet << '\n';
	}
	
	return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;

struct P
{
	int x;
	int y;
};

bool comp(P a, P b)
{
	if(a.x == b.x)
	{
		return a.y < b.y;
	}
	return a.x < b.x;
}

int main()
{
	P p[8];
	for(int i = 0; i < 8; ++i)
	{
		cin >> p[i].x >> p[i].y;
	}
	
	sort(p, p + 8, comp);
	
	if(p[0].x == p[1].x && p[1].x == p[2].x && p[2].x != p[3].x &&
	   p[3].x == p[4].x && p[4].x != p[5].x &&
	   p[5].x == p[6].x && p[6].x == p[7].x &&
	   p[0].y == p[3].y && p[3].y == p[5].y && p[0].y != p[1].y &&
	   p[1].y == p[6].y && p[1].y != p[2].y &&
	   p[2].y == p[4].y && p[4].y == p[7].y)
	{
		cout << "respectable" << endl;
	}
	else
	{
		cout << "ugly" << endl;
	}

	return 0;
}

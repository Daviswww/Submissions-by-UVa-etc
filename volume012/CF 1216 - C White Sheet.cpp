#include<bits/stdc++.h>

using namespace std;
const int N = 5;

struct node
{
	int x1, y1, x2, y2;
}a[N];
int main()
{
	bool go = false;

	for(int i = 0; i < 3; i++)
	{
		cin >> a[i].x1 >> a[i].y1 >> a[i].x2 >> a[i].y2;
	}
	
	for(int i = 1, j = 2; i <= 2; i++, j--)
	{
		if(a[i].x1 <= a[0].x1 && a[i].y1 <= a[0].y1 &&
		    a[i].x2 >= a[0].x2 && a[i].y2 >= a[0].y2)
		    {
		   		go = true;
		    }
		if(a[i].x1 <= a[0].x1 && a[i].y1<=a[0].y1)
		{
			if(a[i].x2>=a[0].x2 && a[i].y2>=a[0].y1)
			{
				a[0].y1 = a[i].y2;
				if(a[j].x1 <= a[0].x1 && a[j].y1 <= a[0].y1 &&
			       a[j].x2 >= a[0].x2 && a[j].y2 >= a[0].y2)
				{
					go = true;
				}				
			}
			else
			{
				if(a[i].y2>=a[0].y2 && a[i].x2>=a[0].x1)
				{
					a[0].x1 = a[i].x2;
					if(a[j].x1 <= a[0].x1 && a[j].y1 <= a[0].y1 &&
				       a[j].x2 >= a[0].x2 && a[j].y2 >= a[0].y2)
					{
						go = true;
					}				
				}				
			}
		}
	}
	if(go)
	{
		cout << "NO" << endl;
	}
	else
	{
		cout << "YES" << endl;
	}
	return 0;
}



#include<iostream>

using namespace std;

int n, a, b, c;

string x;

int main()
{
	while(cin >> n)
	{
		if(n == -1)
		{
			break;
		}
		else
		{
			int max = 0, min = 250, sum = 0;
			string maxname, minname;
			
			for(int i = 0; i < n; i++)
			{	
				cin >> a >> b >> c >> x;
				
				sum = a * b * c;
				
				if(sum > max)
				{
					max = sum;
					
					maxname = x;
				}
				
				if(sum < min)
				{
					min = sum;
					
					minname = x;
				}
				
			}
			
			cout << maxname << " took clay from " << minname << "." << endl;
			
		}
	}
}

#include<bits/stdc++.h>

using namespace std;

int main()
{
	ofstream fout;
	fout.open("OutputFile.txt");
	int n;
	
	while(cin >> n)
	{
		int k[3005] = {0}, s[3005] = {0};
		bool go = true;
		
		cin >> k[0];
		for(int i = 1; i < n; i++)
		{
			cin >> k[i];
			int sum = abs(k[i] - k[i - 1]);
			s[sum]++;
		}
		for (int i = 1; i < n; i++)
        {
        	if (s[i]==0)
			{
				go = false;
				break;
			}
		}
		if(go)
		{
			//fout <<"Jolly"<< endl;
			printf("Jolly\n");
		}
		else
		{
			//fout <<"Not jolly" << endl;
			printf("Not jolly\n");
		}
	}
	return 0;
} 

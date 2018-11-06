#include<iostream>
#include<string>
using namespace std;

int main()
{
	int ary[1000], i = 0;
	string go, str[1000], name;	
	while(true)
	{
		cin >> go;
		if(go == "end")
		{
			break;
		}
		if(go == "insert")
		{
			cin >> str[i] >> ary[i];
			i++;
		}
		if(go == "find")
		{
			cin >> name;
			for(int j = 0; j <= i; j++)
			{
				if(name == str[j])
				{
					cout << ary[j] << endl;
					break;
				}
				if(j == i)
				{
					cout << "-1" << endl;
					break;
				}
			}
		}
	}
	return 0;	
} 

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int N, M;
	string name[1007], ip[1007], command, cip;
	
	cin >> N >> M;
	for(int i = 0; i < N; ++i)
	{
		cin >> name[i] >> ip[i];
		ip[i] += ";";
	}
	
	for(int i = 0; i < M ; ++i)
	{
		cin >> command >> cip;
		for(int j = 0; j < N; ++j)
		{
			if(cip == ip[j])
			{
				cout << command << " " << ip[j] << " #" << name[j] << endl;
				break;
			}
		}
	}

    return 0;
}


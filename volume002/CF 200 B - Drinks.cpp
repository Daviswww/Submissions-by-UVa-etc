#include <iostream>
using namespace std;

int main()
{
	int N, P[100];
	double sum = 0;
	
	cin >> N;
	for(int i = 0; i < N; ++i)
	{
		cin >> P[i];
		sum += P[i];
	}
	
	// ¨D¥­§¡ 
	cout << sum / N << endl;

    return 0;
}


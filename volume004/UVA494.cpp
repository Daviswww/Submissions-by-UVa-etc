#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;

int main ()
{
  string str;

  while(getline (cin,str))
  {
  	int sum = 0;
  	for(int i = 0; i < str.size(); i++)
  	{
  		if(!isalpha(str[i]) && isalpha(str[i-1])) sum++;
	}
	cout << sum << endl;
  }
  return 0;
}

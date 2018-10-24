#include<bits/stdc++.h>

using namespace std;

int main()
{
	char str[1000000];
	string op[200];
	op['a'] = "@", op['b'] = "8", op['c'] = "(";
	op['d'] = "|)", op['e'] = "3", op['f'] = "#";
	op['g'] = "6", op['h']= "[-]", op['i'] = "|";
	op['j'] = "_|", op['k'] = "|<", op['l'] = "1";
	op['m'] = "[]\\/[]", op['n'] = "[]\\[]", op['o'] = "0";
	op['p'] = "|D", op['q'] = "(,)", op['r'] = "|Z";
	op['s'] = "$", op['t'] = "']['", op['u'] = "|_|";
	op['v'] = "\\/", op['w'] = "\\/\\/", op['x'] = "}{";
	op['y'] = "`/", op['z'] = "2";
	gets(str);
	for(int i = 0; str[i] != '\0'; i++)
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
	}
	for(int i = 0; str[i] != '\0'; i++)
	{
		if(str[i] >= 'a' && str[i] <= 'z')
		{
			cout << op[str[i]];
		}
		else
		{
			cout << str[i];
		}
	}	
	return 0;
}


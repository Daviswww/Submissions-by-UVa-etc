#include<bits/stdc++.h>

using namespace std;
const string a = "A   3  HIL JM O   2TUVWXY5", b = "01SE Z  8 ";
int main()
{
	ofstream fout;
	fout.open("OutputFile.txt");
	string str;
	
	while(cin >> str)
	{
		
		bool go1 = false, go2 = false;
		for(int i = 0, j = str.size()-1; i <= j; i++, j--)
		{
			if(str[i] != str[j])
			{
				go1 = true;
			}
			if(str[i] >= 'A' && str[i] <= 'Z')
			{
				if(str[j] != a[str[i]-'A'])
				{
					go2 = true;
				}
			}
			else
			{
				if(str[j] != b[str[i]-'0'])
				{
					go2 = true;
				}	
			}
		}
		cout << str;
		if(go1)
		{
			if(go2)
			{
				//fout <<" -- is not a palindrome."<< endl; 
				printf(" -- is not a palindrome.\n");
			}
			else
			{
				//fout <<" -- is a mirrored string."<< endl; 
				printf(" -- is a mirrored string.\n");
			}
		}
		else
		{
			if(go2)
			{
				//fout <<" -- is a regular palindrome."<< endl; 
				printf(" -- is a regular palindrome.\n");
			}
			else
			{
				//fout <<" -- is a mirrored palindrome."<< endl;
				printf(" -- is a mirrored palindrome.\n");
			}
		}
		//fout << endl;
		cout << endl;
	}
    return 0;
}

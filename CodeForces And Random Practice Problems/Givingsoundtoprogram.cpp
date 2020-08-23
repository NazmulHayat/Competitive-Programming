#include<iostream>
#include<windows.h>
#include<MMsystem.h>
using namespace std;

int main()
{
	int counter = 1;
	bool flag = 0;
	string x;
	int tc;
	cin >> tc;
	for (int i = 1; i <= tc; i++)
	{
		cin >> x;
		for (int i = 1, j = x.length()-1; i <= x.length()-1, j >= 1; i++, j--)
		{
			if (x[i] != x[j])
			{
				flag = 1;
				break;
			}
			else if (x[i] == x[j])
				continue;

		}
		if (flag == 0)
			cout << "Case " << counter << ": YES" << endl;

		else  cout << "Case " << counter << ": NO" << endl;
		counter++;
	}

}


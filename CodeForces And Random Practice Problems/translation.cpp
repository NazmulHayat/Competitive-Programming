#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main()
{


    string z = "zzaz";
	for (int i = 0; i < z.size(); i++) {
		int j = i;
		while (j + 1 < z.size() && z[j + 1] == z[i])
			cout<<j<<endl; j++;

        i=j;
    }
}

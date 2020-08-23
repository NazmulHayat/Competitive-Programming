#include<bits/stdc++.h>
using namespace std;

int Words(string str) {
    int words=1;
    for(int i = 0; str[i] != '\0'; i++)
        {
            if (str[i] == ' ') //Checking for spaces
            {
                words++;
            }
        }
    return words;
}


void print(vector<int> const &input)
{
	for (auto it = input.cbegin(); it != input.cend(); it++)
	{
		std::cout << *it << ' ';
	}
}
int main()
{
    string str,x;
    getline(cin, str);
    int length = Words(str);
    int t;
    cin>>t;
    vector<string> initial;
    for(int i = 0 ; i < t ; i++)
    {
        cin>>x;
        auto itPos = initial.begin() + i;

        initial.insert(itPos, x);
    }
    vector<string> n1;
    vector<string> n2;

    int counter = 0,i=0;
    bool flag = true;

    while(initial.size() != 1){
        if(counter == length){
            i-=1;
            if(flag)
            {

                n1.push_back(initial[i]);
                initial.erase(initial.begin()+i);
                i++;
                flag = false;

            }
            else
            {
                n2.push_back(initial[i]);
                initial.erase(initial.begin()+i);
                i++;
                flag = true;
            }
            counter=0;
        }
        counter++;
        if(i == initial.size())
            i = 0;
        i++;
    }

    if(flag)
    {
        n1.push_back(initial.at(0));
    }

    else{
        n2.push_back(initial.at(0));
    }
    cout<<n1.size()<<endl;;
    for (auto it = n1.cbegin(); it != n1.cend(); it++)
	{
		cout << *it <<endl;
	}
    cout<<n2.size()<<endl;;
    for (auto it = n2.cbegin(); it != n2.cend(); it++)
	{
		cout << *it <<endl;
	}
}

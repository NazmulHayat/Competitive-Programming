#include<bits/stdc++.h>
#include<string.h>

using namespace std;
int main()
{

    string s = "C++ is a joss lang";
    string language = s.substr(0,3); // output of substr storing in language variable.
    cout << language << endl;

    char str1[] = "I love my";
    char str2[] = " Country";
    strcat(str1, str2);
    puts(str1);

    char str3[] = "We have seven Continents in the wolrd";
    char str4[] = "We have seven Continents in the wolrd";
    int result = strcmp(str3,str4);
    printf("strcmp(str3, str4) = %d\n", result);


    char str5[] = "World is beautiful";
    char str6[] = "Yes we can";
    string str7 = strcpy(str5,str6); // simply replace all the content in str1 with the content of str2
    cout<< str7 <<endl;

    string str8 = "c++ is object oriented language";
    int length = str8.length();
    cout << "Length of str1 is : " << length << endl;

    cout<<"What is your name: "<<endl;
    string str9;
    getline(cin, str9 );
    cout<< "your name is : " << str9 << endl;
}

    #include<bits/stdc++.h>
    #include "test1.h"
    using namespace std;


    int main()
    {
        Student aj;
        constructor(aj, 14, 'f', 689);
        printStudent(aj);

        return 0;
    }

    void printStudent(Student person)
    {
        cout<<person.age<<" "<<person.year<<" "<<person.Idnum<<endl;
    }


    void constructor(Student& person, int age, char year, int Idnum)
    {
        person.age = age;
        person.year = year;
        person.Idnum = Idnum;
    }


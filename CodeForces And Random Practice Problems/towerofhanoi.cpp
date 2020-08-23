#include<bits/stdc++.h>
using namespace std;

void toh(int n, char from, char to, char by)//A, C, B
{
    if(n==1){
        cout<<"Move Disc 1"<<" from "<<from<<" to "<<to<<endl;
    }
    else{
        toh(n-1, from, by, to);//A, B, C
        cout<<"Move Disc "<<n<<" from "<<from<<" to "<<to<<endl;
        toh(n-1, by, to, from);//B, C,
    }

}


int main()
{
    int x;
    char a = 'A', b = 'B', c = 'C';
    cin>>x;
    toh(x,a,c,b);
}

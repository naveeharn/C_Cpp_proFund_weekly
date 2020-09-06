#include<iostream>

using namespace std;

int main(){
    int d,m;
    cin>>d>>m;
    int month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    for (int i = 0; i < m-1; i++)   d+=month[i];
    d=(d+2)%7;
    if (d<4)
    {
        if (d<2)
        {
            if (d==0)   cout<<"Monday";
            else        cout<<"Tuesday";
        }
        else
        {
            if (d==2)   cout<<"Wednesday";
            else        cout<<"Thursday";
        }
    }
    else
    {
        if (d<6)
        {
            if (d==4)   cout<<"Friday";
            else        cout<<"Saturday";
        }
        else            cout<<"Sunday";
    }
    cout<<endl;
    return 0;
}
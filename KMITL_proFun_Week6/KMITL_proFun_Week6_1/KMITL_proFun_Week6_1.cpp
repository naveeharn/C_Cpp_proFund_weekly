#include <iostream>

using namespace std;

void f(int x,int y){
    int c=0;
    for (int i = 0; i < 2; i++)
    {
        while (y>x&&i==0)
        {
            y-=x;
            c++;
        }
        if (i==1)
        {
            if (y==0)
            {
                cout<<c;
            }
            else
            {
                cout<<c+1;
            }
        }
    }
}

int main(){
    int x,y;
    cin>>x>>y;
    f(x,y);
    cout<<endl;
    return 0;
}
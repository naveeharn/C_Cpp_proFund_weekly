#include<iostream>

using namespace std;

int printChar(int i,int j,int m){
    (j==m-i||j==m+i)?cout<<"*":cout<<"-";
}

int main(){

    int r,c,m;
    cin>>r;
    c=r-(r+1)%2;
    m=c/2+(c+1)%2;

    for (int i = 0; i < (r-1)/2; i++)
    {
        for (int j = 0; j < c ; j++)
        {
            printChar(i,j,m);
        }
        cout<<endl;
    }
    for (int i = 0; i < 2-r%2; i++)
    {
        cout<<"*";
        for (int j = 0; j < c-2 ; j++) cout<<"-";
        cout<<"*";
        cout<<endl;
    }
    for (int i = (r-1)/2-1; i >= 0; i--)
    {
        for (int j = 0; j < c ; j++)
        {
            printChar(i,j,m);
        }
        cout<<endl;
    }
    cout<<endl;
    
    return 0;
}
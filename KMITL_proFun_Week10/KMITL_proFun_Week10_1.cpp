#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int numGet[150];
    numGet[0]=-1;
    for (int i = 1; i < 150; i++)
    {
        numGet[i]=0;
    }
    if (n<6)
    {
        cout<<"no"<<endl;
    }else
    {
        for (int i = 0; i < 100; i++)
        {
            if (numGet[i]!=0)
            {
                numGet[i+6]=1;numGet[i+9]=1;numGet[i+20]=1;
            }
        }
        for (int i = 6; i < n+1; i++)
        {
            if (numGet[i]==1)
            {
                cout<<i<<endl;
            }
        }
    }
    
    return 0;
}
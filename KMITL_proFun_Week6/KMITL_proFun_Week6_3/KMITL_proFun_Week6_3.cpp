#include <iostream>

using namespace std;

int main(){
    int n,a[50],c=0;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j <= n-1-i; j++)
        {
            if (a[j]>a[j+1])
            {
                c=a[j];
                a[j]=a[j+1];
                a[j+1]=c;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i]>0)
        {
            cout<<a[i];
            c=i;
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (i!=c)
        {
            cout<<a[i];
        }
        
    }
    cout<<endl;
    return 0;
}
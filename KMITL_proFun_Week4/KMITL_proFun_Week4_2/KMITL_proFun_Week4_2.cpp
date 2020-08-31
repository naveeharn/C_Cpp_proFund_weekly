#include <iostream>

using namespace std;

void prt(char a){
    cout<<a;
}

int main(){
    int n,p=1;
    cin>>n;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j <= i; j++)            prt('* ');
        for (int j = 0; j < 2*(n-i-1)-1; j++)   prt('  ');
        for (int j = 0; j <= i; j++)            prt('* ');
        cout<<endl;
    }
    for (int i = 0; i < 2*n-1; i++)             prt('* ');
    cout<<endl;
    for (int i = n-1; i > 0; i--)               
    {
        for (int j = 0; j < i; j++)             prt('* ');
        for (int j = 0; j < 2*(p)-1; j++)       prt('  ');p++;
        for (int j = 0; j < i; j++)             prt('* ');
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
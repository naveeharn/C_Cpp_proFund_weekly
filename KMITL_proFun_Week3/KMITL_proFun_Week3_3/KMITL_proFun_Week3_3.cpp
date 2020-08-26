#include<iostream>

using namespace std;

void edge(int);
void middle(int);

int main(){
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        if (i==0||i==n-1)
        {
            edge(n);
        }else{
            middle(n);
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}

void edge(int n){
    for (int i = 0; i < n; i++)
    {
        cout<<"*";
    }
    
}

void middle(int n){
    cout<<"*";
    for (int j = 1; j <= n-2; j++)
    {
        cout<<" ";
    }
    cout<<"*";
}
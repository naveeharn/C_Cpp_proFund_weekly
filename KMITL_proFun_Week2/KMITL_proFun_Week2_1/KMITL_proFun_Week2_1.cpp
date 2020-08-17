#include<iostream>

using namespace std;

void print(int n){
    int t=n,f=1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < t-1; j++)
        {
            cout<<" ";
        }
        t--;
        for (int k = 0; k < 2*f-1; k++)
        {
            cout<<"*";
        }
        f++;
        cout<<endl;
        
    }
    
}

int main(){
    int n;
    cin>>n;
    
    print(n);

    return 0;
}
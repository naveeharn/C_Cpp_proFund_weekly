#include<iostream>
#include<math.h>

using namespace std;

void printSpace(int n,int i){
    for (int f = 1; f <= abs(n-i); f++)
    {
        cout<<" ";
    }
}

void printStar(int k){
    for (int i = 0; i < 2*k-1; i++)
    {
        cout<<"*";
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    for (int i = 1; i <= 2*n-1; i++)
    {
        printSpace(n,i);
        (i<=n)?printStar(i):printStar(i-2*abs(n-i));
    }
    
    return 0;
}
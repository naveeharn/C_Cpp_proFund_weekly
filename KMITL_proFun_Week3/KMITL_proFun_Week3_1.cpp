#include <iostream>

using namespace std;

int primeNum(int n,int k){
    while (n%k!=0)
    {
        k+=1;
    }
    return k;
}

int main(){
    int n,k=2;
    cout<<"Enter number : ";
    cin>>n;
    cout<<"Factoring Result : ";
    while (n!=1)
    {
        cout<<primeNum(n,k);
        n/=primeNum(n,k);
        if(n!=1)cout<<" x ";
    }
    cout<<endl;
    return 0;
}
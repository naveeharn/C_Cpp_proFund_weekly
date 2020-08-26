#include<iostream>

using namespace std;

int euclid(int,int);

int main(){
    int num1,num2,c;
    cout<<"Enter first number : ";cin>>num1;
    cout<<"Enter second number : ";cin>>num2;

    if(num1<0){
        num1=-num1;
        if(num2<0){
            num2=-num2;
        }
    }else
    {
        if(num2<0){
            num2=-num2;
        }
    }
    if(num1>num2){
        c=num1;
        num1=num2;
        num2=c;
    }
    cout<<"Greatest common continue = "<<euclid(num1,num2);
    cout<<endl;
    return 0;
}

int euclid(int a,int b){
    int gcd,c;
    while(b%a!=0){
        b=b%a;
        gcd=b;
        c=b;
        b=a;
        a=c;
    }
    return gcd;
}
#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    if (60<=n&&n<=69)
    {
        cout<<"C";
    }else
    {
        if (n<60)
        {
            if (n<50){
                cout<<"F";
            }
            else
            {
                cout<<"D";
            }
            
        }
        else
        {
                if (n<80)
            {
                cout<<"B";
            }
            else
            {
                cout<<"A";
            }
        }
        
    }
    cout<<endl;
    return 0;
}
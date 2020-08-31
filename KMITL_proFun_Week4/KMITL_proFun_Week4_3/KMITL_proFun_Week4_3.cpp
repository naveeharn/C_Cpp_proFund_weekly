#include <iostream>

using namespace std;

int main(){
    int p,n[]={0,0},w=1;
    for (int j = 0; j < 4; j++)
    {
        cin>>p;
        n[0]+=p; 
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin>>p;
            n[1]+=p;
        }
        if(n[0]<n[1]){
            n[0]=n[1];
            w=i+2;
        }
        n[1]=0;
    }
    cout<<w<<" "<<n[0];
    cout<<endl;
    return 0;
}
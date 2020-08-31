#include<iostream>

using namespace std;

int b[]={1,0,0},i=0,k;

int swap(int p,int q){
    k=b[p];
    b[p]=b[q];
    b[q]=k;
    return 0;
}

int main(){
    char a[51];
    cin>>a;
    while (a[i]!='\0')
    {
        if (a[i]=='B')swap(1,2);
        else
        {
            if (a[i]=='A')swap(0,1);
            else swap(0,2);
        }
        i++;
    }
    int *aptr = &b[0];
    for (int j = 0; j < 3; j++)
    {
        if(*aptr==1){
            cout<<j+1;
            break;
        }
        aptr+=1;
    }
    cout<<endl;
    return 0;
}
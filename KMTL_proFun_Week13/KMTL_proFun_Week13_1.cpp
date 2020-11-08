#include <iostream>

using namespace std;

struct Number
{
    int hund;
    int ten;
    int one;
}Number[1000000];


bool compareNum(int a,int b){
    if      (Number[a].hund ==  Number[b].hund)     return true;
    else if (Number[a].ten  ==  Number[b].ten)      return true;
    else if (Number[a].one  ==  Number[b].one)      return true;
    else                                            return false;
    
}

int main(){
    int n,num,k=0;
    // char id[1000000][4];
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>num;
        Number[i].hund = num/100;
        Number[i].ten = (num-Number[i].hund*100)/10;
        Number[i].one = num-Number[i].hund*100-Number[i].ten*10;
    }
    
    // cout<<endl;
    
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (compareNum(i,j))
            {
                // cout<<Number[i].hund<<Number[i].ten<<Number[i].one<<" ";
                // cout<<Number[j].hund<<Number[j].ten<<Number[j].one<<"\n";
                k++;
            }
            
        }
        // cout<<endl;
    }
    cout<<k<<endl;
    return 0;
}

#include <iostream>

using namespace std;

struct Member{
    int number ;
    int remnant ;
    bool isRepeated ;
}member[10];

int modulo(int n,int mod){
    return n % mod;
}

bool isAllRepeated(){
    int repeat=0,notrepeat=0;
    for (int i = 0; i < 10; i++)
    {
        (member[i].isRepeated)?repeat++:notrepeat++;
    }
    // cout<<"repeat : "<<repeat<<" "<<"notrepeat : "<<notrepeat<<" ";
    if(notrepeat>0) return 1;
    else            return 0;
}

int main(){
    int a=0;
    for (int i = 0; i < 10; i++)
    {
        cin>>member[i].number;
        member[i].remnant = modulo(member[i].number,42);
    }

    while (isAllRepeated())
    {
        int k=0;
        while (member[k].isRepeated) k++;
        for (int i = 0; i < 10; i++)
        {
            if (member[k].remnant == member[i].remnant)
            {
                member[i].isRepeated = 1;
            }
            
        }
        member[k].isRepeated = 1;
        a++;
        
    }
    cout<<a<<"\n";

    // cout<<"\n";
    // for (int i = 0; i < 10; i++)
    // {
    //     cout<<member[i].remnant<<" ";
    // }

    cout<<endl;
    return 0;
}
/*
Test Case

1 2 3 4 5 6 7 8 9 10
42 84 252 420 840 126 42 84 420 126
39 40 41 42 43 44 82 83 84 85

*/
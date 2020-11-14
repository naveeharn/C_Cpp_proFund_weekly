#include <iostream>
#include <math.h>

using namespace std;

struct Atomic
{
    int energy;
    bool isStill;
}Atomic[1000000];

int indexAtom(int a){
    while (!Atomic[a].isStill)  a++;
    return a;
}

int main(){
    int n,j,compare,c=1,x,y,sum=0;

    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cin>>Atomic[i].energy;
        Atomic[i].isStill = true;
    }


    for (int p = 0; p < n/2; p++)
    {
        compare=0;
        for (int i = 0; i < n-(2*c)+1; i++)
        {
            // while (!Atomic[i].isStill)  i++;
            i = indexAtom(i);
            j=i+1;
            // while (!Atomic[j].isStill)  j++;
            j = indexAtom(j);
            if (compare<abs(Atomic[i].energy-Atomic[j].energy))
            {
                compare = abs(Atomic[i].energy-Atomic[j].energy);
                x=i,y=j;
            }
            if (i >= n-(2*c))
            {
                Atomic[x].isStill = false;
                Atomic[y].isStill = false;
                sum+=compare;
            }
        }
        
        c++;
    }
    
    cout<<sum;
    


    cout<<endl;
    return 0;
}
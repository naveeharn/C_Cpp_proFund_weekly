/* test case
5 
1 1 
3 3 
5 4 
7 15 
10 3
*/

#include <iostream>

using namespace std;

int main(){
    char dir='L';
    long pos=1,fall=0,n,a[100000][2];
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin>>a[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        bool isStopped=true ;
        long k=i;
        //r
        long r=0;
        while (isStopped && k<n-1)
        {
            if(a[k][0]+a[k][1]>a[k+1][0]){
                k+=1;
                r+=1;
            }else{
                isStopped=false;
            }
        }//cout<<i<<"  "<<a[i][0]<<" "<<a[i][1]<<"  r "<<": "<<r<<endl;

        //l
        k=i;
        isStopped=true ;
        long l=0;
        while (isStopped && k>0)
        {
            if(a[k][0]-a[k][1]<a[k-1][0]){
                k-=1;
                l+=1;
            }else{
                isStopped=false;
            }
        }//cout<<i<<"  "<<a[i][0]<<" "<<a[i][1]<<"  l "<<": "<<l<<endl;

        //set
        long compare=0;
        (r>l)?compare=r:l=compare=l;
        if (fall<compare)
        {
            pos=i+1;
            fall=compare;
            (r>l)?dir='R':l=compare='L';
        }
    }
    
    cout<<pos<<" "<<dir<<endl;
    
    return 0;
}


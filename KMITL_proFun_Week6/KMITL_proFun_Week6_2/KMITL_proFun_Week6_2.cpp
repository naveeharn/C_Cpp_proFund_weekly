#include <iostream>

using namespace std;

int main(){
    int side[3],n=0;

    for (int i = 0; i < 3; i++)
    {
        cin>>side[i];
    }

    while (side[0]*side[1]*side[2]!=1)
    {
        if (side[0]>=side[1]&&side[0]>=side[2])
        {
            side[0]/=2;
        }
        else if (side[1]>=side[0]&&side[1]>=side[2])
        {
            side[1]/=2;
        }
        else
        {
            side[2]/=2;
        }
        n++;
    }

    cout<<n<<endl;
    return 0;
}
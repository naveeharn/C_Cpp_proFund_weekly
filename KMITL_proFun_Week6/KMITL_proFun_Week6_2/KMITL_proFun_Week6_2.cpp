#include <iostream>

using namespace std;

int main(){
    int a,b,c,n=0;

    cin>>a>>b>>c;

    while (a*b*c!=1)
    {
        if (a>=b&&a>=c)
        {
            a/=2;
        }
        else if (b>=a&&b>=c)
        {
            b/=2;
        }
        else
        {
            c/=2;
        }
        n++;
    }

    cout<<n<<endl;
    return 0;
}
#include<iostream>

using namespace std;

int main(){
    int m,n;
    cin>>m>>n;

    char set[m][n];
    int brick[n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>set[i][j];
        }
        
    }

    for (int j = 0; j < n; j++)
    {
        cin>>brick[j];
    }

    for (int j = 0; j < n; j++)
    {
        int k=0;
        if (brick[j]>0)
        {
            while (set[k][j]=='.' && k<m) k++;
            k--;
            while (k>=0&&brick[j]>0)
            {
                set[k][j]='#';
                k--;brick[j]--;
            }
        }
    }
    
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<set[i][j];
        }
        cout<<endl;
    }

    cout<<endl;
    return 0;
}
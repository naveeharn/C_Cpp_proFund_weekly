#include <iostream>

using namespace std;

int n ,magicNumber;

void before(int array[10][10]){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>array[i][j];
        }
    }
}

bool isSumHorizontal(int array[10][10]){
    int s=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            s+=array[i][j];
        }
        if (s!=magicNumber){
            return false;
        }else{
            s=0;
        }
    }
    return true;
}

bool isSumVertical(int array[10][10]){
    int s=0;
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n; i++)
        {
            s+=array[i][j];
        }
        if (s!=magicNumber){
            return false;
        }else{
            s=0;
        }
    }
    return true;
}

bool isSumDiagonal(int array[10][10]){
    int l=0;
    for (int i = 0; i < n; i++)
    {
        l+=array[i][i]; 
    }

    int r=0;
    for (int i = n-1; i >= 0; i--)
    {
        r+=array[i][n-1-i];
    }
    
    if (l==magicNumber && r==magicNumber){
        return true;
    }else{
        return false;
    }
    
}

void after(int array[10][10]){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){

    int ms[10][10];
    
    cin>>n;
    magicNumber = (n*(n*n+1))/2;

    before(ms);

    if (isSumHorizontal(ms) && isSumVertical(ms) && isSumDiagonal(ms)){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    
    //after(ms);

    cout<<endl;
    return 0;
}

/*
3
8 1 6 
3 5 7 
4 9 2

4 
16 2 3 13
5 11 10 8 
9 7 6 12 
4 14 15 1
*/
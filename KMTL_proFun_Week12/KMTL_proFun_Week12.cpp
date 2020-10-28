#include <iostream>

using namespace std;
// line:106  ->  TEST CASE MAGIC SQUARE

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
TEST CASE MAGIC SQUARE

3
8 1 6 
3 5 7 
4 9 2

4 
16 2 3 13
5 11 10 8 
9 7 6 12 
4 14 15 1

5
17 24 1 8 15 
23 5 7 14 16 
4 6 13 20 22
10 12 19 21 3 
11 18 25 2 9

6
32 29 4 1 24 21 
30 31 2 3 22 23 
12 9 17 20 28 25 
10 11 18 19 26 27 
13 16 36 33 5 8 
14 15 34 35 6 7

7
30 39 48 1 10 19 28 
38 47 7 9 18 27 29 
46 6 8 17 26 35 37
5 14 16 25 34 36 45 
13 15 24 33 42 44 4 
21 23 32 41 43 3 12 
22 31 40 49 2 11 20

8
64 2 3 61 60 6 7 57 
9 55 54 12 13 51 50 16 
17 47 46 20 21 43 42 24 
40 26 27 37 36 30 31 33 
32 34 35 29 28 38 39 25 
41 23 22 44 45 19 18 48 
49 15 14 52 53 11 10 56
8 58 59 5 4 62 63 1
*/
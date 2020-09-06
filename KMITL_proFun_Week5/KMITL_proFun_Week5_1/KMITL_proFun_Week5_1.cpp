#include<iostream>

using namespace std;

int main(){
    char a[101];
    int p=0;
    scanf("%[^\n]",&a);
    while(a[p]!='\0'){
        cout<<a[p];
        if (a[p]=='a'||a[p]=='e'||a[p]=='i'||a[p]=='o'||a[p]=='u')
        {
            p+=2;
        }
        p+=1;
    }
    cout<<endl;
    return 0;
}

/*
test case                                       answer

zepelepenapa papapripikapa                      zelena paprika
bapas jepe doposapadnapa opovapa kepemipijapa   bas je dosadna ova kemija

*/
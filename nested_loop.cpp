#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i,n,m,j;
cout<< "enter the value of n and m respectively ";
cin>> n ;
cin>> m;
    for( i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            cout<< "*";
        }
        cout<<endl;
    }

    return 0;
}

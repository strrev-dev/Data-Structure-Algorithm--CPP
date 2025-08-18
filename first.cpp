#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    // cout <<"Hello World \n";
    // cout<< "deepan"<<endl<<"maurya" "\n";
    // return 0;

    int n ;
    cout<< "Enter the  value of n :";
    cin >> n;

    int sum =0;
    for(int i =0; i <=n; i+=2){
        sum +=i;
       
    }
    cout<< sum;
    return 0;
}


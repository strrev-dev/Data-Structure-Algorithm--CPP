//print the factorial of number N
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    int fact=1;
    cout<< "Enter the number n :";
    cin>>n;
    for(int i=n;i>=1;i--){
        fact *=i;
    }
    cout <<"Factorial of number" << endl<<n << endl<<fact<< endl;
    return 0;
}

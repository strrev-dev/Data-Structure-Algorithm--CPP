#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n =50;
    int oddSum =0;
    int i=1;
    while(i <=n){
        if( !(i%2==0)){
            oddSum +=i;
        }
        i++;
    }
    cout << "sum =" << oddSum <<endl;
    return 0;
}

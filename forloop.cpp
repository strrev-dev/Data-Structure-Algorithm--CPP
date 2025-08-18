#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n = 50;
    int evenSum = 0;
    
    for( int i =0; i <=n;i++){
        if(i%2 == 0){
            evenSum +=i;
        }
       
    }
    cout << "even sum upto n is = " << evenSum<<endl;
    return 0;
}

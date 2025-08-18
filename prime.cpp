#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cout<< "Enter the number n : ";
    cin>> n;
    int i ;
    bool isPrime = true;

    for(i =2; i*i<=n;i++){
        if(n%i==0){ //non prime
        isPrime = false;
        break;
        
    }
}
    if(isPrime == true){
        cout<<"number is prime";
    }
        else{
        cout<< "number is non prime";
    }
    return 0;
}

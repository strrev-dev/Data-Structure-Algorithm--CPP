// sum of 1 to N numbers which are divisible by 3
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cout<< "Please enter the number ,You want to check: ";
    cin>> n;
    int sum = 0;
    for(int i = 1; i <=n;i++){

        if (i%3==0)
        {
            
            sum +=i;
            
            
        }
    }
    cout << sum;
    
    
    return 0;
}

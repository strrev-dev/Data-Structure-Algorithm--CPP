#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n =4;
   
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j<i; j++)
        {
            /* code */ cout<< " ";
        }
        
        for (int j = n-i; j>0; j--)
        {
            cout<<i+1 ;
        }
        cout<<endl;
        
        
    
    }
    
    return 0;
}

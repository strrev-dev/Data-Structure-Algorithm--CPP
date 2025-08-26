#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n = 5;
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
         for (int j = 0; j<i; j++)
        {
            /* code */ cout<< " ";
        }
         for (int j = n-i; j>0; j--)
        {
            cout<< ch ;
        }
        ch++;
        cout<<endl;
        
    }
    
    return 0;
}

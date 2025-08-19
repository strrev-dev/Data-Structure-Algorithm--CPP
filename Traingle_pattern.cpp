#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n=5;
    char ch = '*';
     for (int i = 1; i < n; i++)
     {
        for (int j = 1; j < i+1; j++)
        {
            cout<< "* " ;
        }
        cout<<endl;
     }
     
    return 0;
}

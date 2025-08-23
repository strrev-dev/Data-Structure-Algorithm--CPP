#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n = 4;
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
      for (ch  = 'A'+i; ch>= 'A'; ch--)
      {
        cout <<ch;
        
      }
      cout<<endl;
    }
    
    return 0;
}

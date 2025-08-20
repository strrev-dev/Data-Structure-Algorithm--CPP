#include  <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n =4;
     char ch = 65;
    for (int i = 0; i <=n; i++)
    {
        for (int j = 1; j <= i+1; j++)
        {
            cout << char(ch+i);
            
        }
        cout<<endl;
    }
    
    return 0;
}

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    char ch = 65;
    int n = 4;
 for (int i = 1; i <= n; i++)
 {
    for (int j = 1; j <=n; j++)
    {
        cout<< ch<<" ";
        ch++;
    }
    cout<< endl;
 }
 
    return 0;
}

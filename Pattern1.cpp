#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n = 4, num = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    return 0;
}

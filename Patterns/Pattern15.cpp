#include<iostream>

using namespace std;

int main()
{
    int n, i = 1;
    cin>>n;
    while (i <= n)
    {
        int j = 1;
           char ch = 'A'+ i - 1;
        while(j <= i)
        {
            cout<< ch << " ";
            j = j + 1;
        }
        cout<<"\n";
        i = i + 1;
    }
    

}
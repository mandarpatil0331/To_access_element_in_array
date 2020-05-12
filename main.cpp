#include <iostream>

using namespace std;

int main()
{
    int i,a[5];
    cout<<"Enter elements:";
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    cout<<"You entered:";
    for(i=0;i<5;i++)
    {
        cout<<*(a+i)<<"\n";
    }
    return 0;
}

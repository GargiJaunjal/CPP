#include<iostream>
using namespace std;

void pyramid(int n){

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }    
        cout<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter the number of rows you want";
    cin>>n;

    pyramid(n);
    
    return 0;
}
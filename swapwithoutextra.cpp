#include<iostream>
using namespace std;

int main()
{
    int x,y;
    cout<<"Enter number";
    cin>>x;
    cout<<"Enter number";
    cin>>y;

    x=x+y;
    y=x-y;
    x=x-y;

    cout<<"Swapped numbers:"<<x<<" "<<y;
    
    
   
    return 0;
}
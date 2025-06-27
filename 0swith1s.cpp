#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter number";
    cin>>num;
    int result=0;
    int place=1;

    while(num>0){
        int digit=num%10;
        if(digit==0){
            digit=1;
        }
    result=result+digit*place;


    num=num/10;
    place=place*10;

    }
    cout<<result<<endl;

    return 0;
}
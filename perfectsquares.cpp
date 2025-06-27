#include<iostream>
using namespace std;

int perfectsquares(int start,int end){

    if(start>end)
    {
        swap(start,end);
    }
    int cnt=0;
    int i=1;
    while(true){
        int sq=i*i;
        if(sq>end){
            break;
        }
        if(sq>=start){
            cnt++;
        }
        i++;
    }
    return cnt;
}
int main()
{
    int n;
    int start,end;
    cout<<"Enter number series starting and ending with:";
    cin>>start>>end;

    int result=perfectsquares(start,end);
    cout<<"The count of perfect squares in given series is:"<<result<<endl;

    return 0;
}
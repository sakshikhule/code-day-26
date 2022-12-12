#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,i,a;
    cout<<"enter no. of persons = ";
    cin>>n;
    for(i=1;i<n;i++)
    {
        a=n-i;
        sum=sum+a;
    }
    cout<<"Maximum no of handshakes are = "<<sum;
    return 0;
}

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;                   //taking input.
    int fib[n];
    fib[0]=0;fib[1]=1;        //assign 0 and 1 on first places of array.
    for(int i=2;i<=n;i++)
    {
        fib[i]=fib[i-2]+fib[i-1];

    }
    cout<<"Fibonacci Number: "<<fib[n]<<endl;        //print answer.
}


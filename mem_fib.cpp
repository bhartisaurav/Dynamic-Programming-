#include<iostream>
#include<algorithm>
using namespace std;
static int count1=0;
 long int fib(long int B[],int n)
 {
     count1++;
     if(B[n]!=-1)
        return B[n];
        else
        {

          return B[n]=fib(B,n-2)+fib(B,n-1);
           //return B[n];
        }


 }
 int main()
 {
     int n;
     cin>>n;
     long int A[n];
     fill_n(A+0,n+1,-1);


     A[0]=0;A[1]=1;
     long int ans=fib(A,n);
     cout<<endl<<ans;
     cout<<"\ncalls: "<<count1;

 }

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

        }


 }
 int main()
 {
     int n;
     cin>>n;                      //Taking n as a input  for a Fibonacci series
     long int A[n];               // array to store repeated sub-problems.
     fill_n(A+0,n+1,-1);          //initialized array with -1 using algorithm header file function fill_n(arr,limit,value to assign)


     A[0]=0;A[1]=1;               //initialized first two values places of array with 0 and 1.
     long int ans=fib(A,n);
     cout<<"Fibonacci number:"<<ans;       // print answer.


 }

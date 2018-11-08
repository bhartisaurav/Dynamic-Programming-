#include<iostream>
#include<algorithm>
using namespace std;
int static calls=0;
int compute_cost(int B[],int N,int M[],int ele)
{ calls++;
    if(N<0)
        return 0;
    if(M[N]!=0)
       return M[N];

    M[N]=max((B[N]+compute_cost(B,N-2,M,B[N])),compute_cost(B,N-1,M,0));

    return M[N];
}

int main()
{
int n;
cin>>n;
int A[n],mem[n];
fill_n(mem,n+1,0);
for(int i=0;i<n;i++)
    cin>>A[i];
cout<<compute_cost(A,n-1,mem,0)<<endl;
cout<<"number of calls:"<<calls<<endl;
}

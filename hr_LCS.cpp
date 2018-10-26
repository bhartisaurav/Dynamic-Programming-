#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    int lenA,lenB;
    cin>>lenA>>lenB;                          //Taking length of two integer sequences as an input.
    int A[lenA],B[lenB];                      //declaration of two input arrays.
    for(int i=0;i<lenA;i++)
    cin>>A[i];
    for(int j=0;j<lenB;j++)
    cin>>B[j];
    int ans[min(lenA,lenB)+1];               //declaration of array that contain final sub-sequence.

    int arr[lenB+2][lenA+2];                   //2-d array that help in finding the length of max sub-sequence

    for(int i=0;i<=lenB;i++)
    {                                          //fill 2-d array with 0.
      for(int j=0;j<=lenA;j++)
      {
          arr[i][j]=0;
      }

    }

    for(int i=1;i<=lenB;i++)
    {                                         // filling all values of 2-d matrix.
      for(int j=1;j<=lenA;j++)
      {
          if(B[i-1]==A[j-1])
            arr[i][j]=arr[i-1][j-1]+1;
          else
            arr[i][j]=max(arr[i-1][j],arr[i][j-1]);
      }

    }

    int flag=0,k=0;
    for(int i=lenB;i>=0;i--)
    {                                            //loop to find sub-sequence with the help of 2-d matrix.
     for(int j=lenA;j>=0;j--)
     {
         if(B[i-1]==A[j-1])
         {

             ans[k++]=A[j-1];
             i--;
         }
         else
         if(arr[i-1][j]>arr[i][j-1])
         {
            j++;
            i--;
         }
         if(arr[i][j]==0)
         {
             flag=1;
             break;
         }
     }
     if(flag==1)
        break;
   }
    for(int i=k-1;i>=0;i--)                                //print the final sub-sequence.
        cout<<ans[i]<<" ";
}

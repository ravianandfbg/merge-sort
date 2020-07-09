#include<iostream>
using namespace std;
void merge(int a[],int l,int m, int r)
{
    int i,j,k;
int n1=m-l+1;
int n2=r-m;
int L[n1],R[n2];
for(i=0;i<n1;i++)
L[i]=a[l+i];
for(j=0;j<n2;j++)
    R[j]=a[m+1+j];
i=0;
j=0;
k=l;
while(i<n1 && j<n2)
{
    if(L[i]<=R[j])
    {
        a[k]=L[i];
    i++;k++;
    }

else
{
    a[k]=R[j];
j++;k++;
 }
}
while(i<n1)
{
  a[k]=L[i];
  i++;
  k++;
}
while(j<n2)
{
    a[k]=R[j];
    j++;
    k++;
}
}
void mergesort(int a[],int l, int r)
{
if(l<r)
{
    int m=(l+r)/2;
    mergesort(a, l, m);
    mergesort(a, m+1, r);
    merge(a, l, m, r);
 }
}
    void printArray(int A[],int size)
    {

int i;
for(i=0;i<size;i++)
    cout<<A[i]<<endl;
}
int main()
{
    int a[30],n,i;
    cout<<"Enter the number of elements: "<<endl;
    cin>>n;
    cout<<"Enter the elements of an array: "<<endl;
    for(i=0;i<=n-1;i++)
        cin>>a[i];
        cout<<"\nGiven array is:\n";
        printArray(a,n);

        mergesort(a,0,n-1);

        cout<<"\nSorted array is:\n";
        printArray(a,n);
        return 0;

}



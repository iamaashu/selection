#include<iostream>
using namespace std;
#define MAXSIZE 10

void selection(int arr[]);
int arr[MAXSIZE],maxsize;
int main(void)
{
    int i;
    cout<<"\nHow many elements you want to sort :";
    cin>>maxsize;
    cout<<"\nEnter value one by one : ";
    for(i=0;i<maxsize;i++)
    {
        cout<<"\n Enter elements : ";
        cin>>arr[i];
    }
    cout<<"\nArray before sorting :";
    for(i=0;i<maxsize;i++)
        cout<<"\t"<<arr[i];
    selection(arr);
    cout<<"\nArray after sorting :";
    for(i=0;i<maxsize;i++)
    {
         cout<<"\t"<<arr[i];
    }
}
void selection(int arr[])
    {
        int i,j,k;
        int min,temp;
        for(i=0;i<maxsize-1;i++)
        {
            min=i;
            for(j=i+1;j<maxsize;j++)
            {
                if(arr[j]<arr[min])
                    min=j;
            }
            temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
    }
}

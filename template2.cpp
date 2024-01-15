#include<iostream>
using namespace std;

template<typename a>
void bubblesort(a arr[], int n)
{
    for(int i=0; i<n-1;i++)
    {
        for (int j =0; j<n- i -1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                a temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

template<typename a>
void printarray(a arr[], int n)
{
    for (int i = 0; i < n; ++i )
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int array[10];
    cout<<"Enter the numbers for the array"<<endl;
    for(int i =0;i<10;i++)
    {
        cin>>array[i];
    }
    cout<<"Original array:"<<endl;
    printarray(array, 10);

    cout<<"Sorted array: "<<endl;
    bubblesort(array, 10);
    printarray(array,10);
    return 0;
}

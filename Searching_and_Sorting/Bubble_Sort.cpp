#include<bits/stdc++.h>

using namespace std;

void bubbleSort(int arr[], int n)
{
    for(int i = 1; i<n; i++)
    {
        bool swapped = false;
        for(int j = 0; j < n- i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false)
        {
            break;
        }
    } 
}

void print(int arr[], int n)
{
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[100], n;
    cout<<"Enter the number of elements in the array : ";
    cin>>n;
    cout<<"Enter the elememnts : \n";
    for(int i = 0; i<n; i++)
    {
        cout<<"arr["<<i<<"] = ";
        cin>>arr[i];
    }
    cout<<"The sorted array is : ";
    bubbleSort(arr, n);
    print(arr, n);
}
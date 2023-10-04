#include <iostream>

using namespace std;

void selection(int arr[], int n)
{
    int i, j, small;

    for (i = 0; i < n-1; i++)    // One by one move boundary of unsorted subarray
    {
        small = i; //minimum element in unsorted array

        for (j = i+1; j < n; j++)
        if (arr[j] < arr[small])
            small = j;
// Swap the minimum element with the first element
    int temp = arr[small];
    arr[small] = arr[i];
    arr[i] = temp;
    }
    cout<<"the minimum value is:   "<<arr[0]<<endl;
    cout<<"the minimum value is:   "<<arr[n-1] <<endl;
    }


void printArr(int a[], int n) /* function to print the array */
{
    int i;
    for (i = 0; i < n; i++)
        cout<< a[i] <<" ";
	cout<<endl;
}

int main()
{
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the element"<<endl;
    for( int i=0;i<n;i++)
    {
    cin>>a[i];
    }
    cout<< "Before sorting array elements are - "<<endl;
    printArr(a, n);
    selection(a, n);
    cout<< "\nAfter sorting array elements are - "<<endl;

    return 0;
}

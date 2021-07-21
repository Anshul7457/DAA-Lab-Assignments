#include<iostream>
using namespace std;

void linear_search()
{
    int x=1,N,key,temp=0,comp=1,j;
    cout << "Enter the number of elements to enter in array : " << endl;
    cin >> N;
    int arr[N];  
    cout << "Enter the elements in the array : " << endl;
    for(int i=0;i<N;i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the element to search in the array : " << endl;
    cin >> key;
    for(j=0;j<N;j++)
    {
        if(key==arr[j])
        {
            temp=1;
            break;
        }
        else
        {
            comp++;
        }
    }
    if(temp==1)
    {
        cout << "Test Case :" << x << " : Element Found At Index : " << j << endl;
    }
    else
    {
        cout << "Test Case :" << x << " : Element Not Found" << endl;
    }
    cout << "Number of comparisons taken : " << comp << endl;  
    x++;
}

int main()
{
    int t;
    cout << "Enter the number of test cases you want to enter" << endl;
    cin >> t;
    while(t--)
    {
        linear_search();         
    }
}

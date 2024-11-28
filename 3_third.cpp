#include<iostream>
using namespace std;
int main()
{
    int arr[3][3];
    int sum=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<"Enter the value of "<<j+1<<" element of row no "<<i+1<<" ::";
            cin>>arr[i][j];
            sum+=arr[i][j];
        }
        cout<<endl;
    }
    cout<<"The sum of all the array is "<<sum;
}
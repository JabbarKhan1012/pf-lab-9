#include<iostream>
using namespace std;
int main()
{
    int arr[3][4];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<"Enter the value of "<<j+1<<" element of row no "<<i+1<<" ::";
            cin>>arr[i][j];
            
        }
        cout<<endl;
    }
    cout<<"The two dimensional is below"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }
}
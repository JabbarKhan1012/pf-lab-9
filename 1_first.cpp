#include<iostream>
using namespace std;
int main()
{
    int arr[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    cout<<"The two dimensional is below"<<endl;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }
}
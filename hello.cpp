#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int m,n;
    cout<<"enter number of column and row"<<endl;
    cin>>m>>n;
    
    int arr[m][n];
    cout<<"enter "<<m*n<<" element"<<endl;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

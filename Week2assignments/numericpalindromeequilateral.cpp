#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    //spaces
    for(int row=0;row<n;row++)
    {
        for (int col=0;col<n-row-1;col++)
        {
            cout<<" ";
        }
        //numbers
        for(int col=0;col<row+1;col++)
        {
            cout<<col+1;
        }
        int start=row;
        for(int col=0;col<row;col++)
        {
            cout<<start;
            start=start-1;
            
        }
        cout<<endl;
    
    }
    
}
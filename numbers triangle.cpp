#include<iostream>
using namespace std;
int main()
{
    int n;
    
    cout<<"Enter no. of lines of numbers triangle: ";
    cin>>n;
    
    for ( int i=0; i<n; i++)
    {
        for ( int j=n; j>=n-i; j--)
        {
            cout<<i+1;
        }
        
    cout<<endl;    
    }
}
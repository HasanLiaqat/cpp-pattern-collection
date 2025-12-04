#include<iostream>
using namespace std;
int main()
{
    int n;
    
    cout<<"Enter no. of lines of pyramid: ";
    cin>>n;
    
    for ( int i=0; i<n; i++ )
    {
        for ( int j=0; j<n-i; j++)
        {
            cout<<" ";      
        }
        
        for ( int k=0; k<i+1; k++)
        {
            cout<<"*";
        }
        
        for ( int z=0; z<i; z++ )
        {
            cout<<"*";
        }
        
    cout<<endl;    
    }
}
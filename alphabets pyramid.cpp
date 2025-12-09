#include<iostream>
using namespace std;
int main()
{
    int n;
    char ch = 'A';
    
    cout<<"Enter no. of lines of alphabets pyramid: ";
    cin>>n;
    
    for ( int i=0; i<n; i++)
    {
        for ( int j=0; j<n-i; j++)
        {
            cout<<" ";
        }
        
        for ( int k=0; k<i+1; k++)
        {
            cout<<ch;
        }

        for ( int z=0; z<i; z++)
        {
            cout<<ch;
        }
        
        ch++;
        
    cout<<endl;    
    }
}
#include<iostream>
using namespace std;

int main()
{
    int y=0, n=0;
    int x,z;
    int arr[y];
    int temp;
    cout<<"Enter the number: ";
    cin>>x;
    temp=x;
   while(temp!=0)
   {
       z=temp%10;
       arr[y]=z;
       y++;
       temp /=10;  // temp=temp/10
    }
    cout<<"Number of digits are: "<<y<<endl;

    for(int i=y-1; i>-1; i--)
    {
        cout<<"   "<<arr[i];
    }
 cout<<endl;
    for(int j=y-1; j>-1; j--)
    {
        n+=arr[j];
    }

cout<<"The sum is: "<<n;

 

}
#include<iostream>
using namespace std;

int main()
{
  int arr[5]={3,5,2,7,9};

  int Fmax,Smax;

  if(arr[0]<arr[1])
  {
      Fmax=arr[1];
      Smax=arr[0];
      
  }
  else
  {
      Fmax=arr[0];
      Smax=arr[1];
  }
for(int i=2; i<5;i++)
{
    if(arr[i]>Fmax)
    {
        Smax=Fmax;
        Fmax=arr[i];
    }

}

cout<<"The First Maximum number is: "<<Fmax<<", Second Maximum number is: "<<Smax<<endl;
    return 0;
}
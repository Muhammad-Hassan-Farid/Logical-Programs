#include<iostream>
using namespace std;


string createNewPassword(string oldPassword, int lenght) 
{
    bool condition2 = false;
    bool condition3 = false;
    bool condition4 = false;
    bool condition5 = false;
    string newPassword = oldPassword;
    for (int i = 0; i < lenght ; i++) {
        if (oldPassword[i] >= 'A' && oldPassword[i] <= 'Z')
        {
            condition2 = true;
        }
          
        else if (oldPassword[i] >= 'a' && oldPassword[i] <= 'z')
        {
           condition3 = true; 
        }  
        else if (oldPassword[i] >= '0' && oldPassword[i] <= '9')
          {
            condition4 = true;
          }
        else if (oldPassword[i] == '@' || oldPassword[i] == '#' || oldPassword[i] == '&' || oldPassword[i] == '*')
          {
            condition5 = true;
          }
    }

    if (!condition2)
    {
        newPassword.append("A"); // Append any uppercase English alphabet letter.
    }
    if (!condition3) 
    {
    newPassword.append("a"); // Append any lowercase English alphabet letter.
    }
    if (!condition4) 
    {
    newPassword.append("1"); // Append any digit.
    }
    if (!condition5) 
    {
    newPassword.append("#"); // Append any special character.
    }

    return newPassword;
}


int main()
{
    int Test,passlenght;
    string pass;

    cout<<"Enter the total tests: ";
    cin>>Test;  // Entering Total Tests
     
    for(int test_no=1; test_no<=Test; test_no++)
    {
        cout<<"Case#"<<test_no<<endl;
        cout<<"Enter the password Lenght: ";
        cin>>passlenght;
        cout<<"Enter the OldPassword: ";
        cin>>pass;
        
        cout<<createNewPassword(pass, passlenght);

    }
    

    


}
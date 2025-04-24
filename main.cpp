#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    //Variable to store the card's number
    string card_number;
    cout<<"Hello!\nEnter your card number to check if it's valid or not!\n";
    cin>>card_number;

    //Sum that will be checked later if it's divisible by zero
    int sum=0;

    //Looping on every second digit, multiplying and adding digits if product is greater than 9
    //Also added to the sum in the same loop
    for(int i=0;i<card_number.size();i+=2)
    {
        if((card_number[i]-'0')*2>9)
        {
            sum+=((card_number[i]-'0')*2)-9;
        }
        else
        {
            sum+=(card_number[i]-'0')*2;
        }
    }
    //Summing odd positions as they are
    for(int i=1;i<card_number.size();i+=2)
    {
        sum+=card_number[i]-'0';
    }

    //Checking the validity of the card
    cout<<"Sum equals = "<<sum<<endl;
    if(sum%10==0)
    {
        cout<<"Valid Card Number";
    }
    else
    {
        cout<<"Invalid Card Number";
    }


}

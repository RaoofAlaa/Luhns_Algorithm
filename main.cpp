#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);

    string card_number;
    cin>>card_number;


    int sum=0;
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

    for(int i=1;i<card_number.size();i+=2)
    {
        sum+=card_number[i]-'0';
    }

    if(sum%10==0)
    {
        cout<<"Valid Card Number";
    }
    else
    {
        cout<<"Not a Valid Card Number";
    }


}
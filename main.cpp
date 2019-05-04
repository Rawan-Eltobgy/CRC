// Rawan Hesham Elsayed Eltobgy
// 20151439074
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string msg, geny,remainder,answer;
    char temp[1000000];
    cin>>msg;
    answer=msg;
    cin>>geny;
    long long int x=geny.size()-1;
    long long int j=geny.size();
 
    for(long long int i=0 ; i<x ; i++)
    {
        msg+='0';
    }
    if ((geny[0]=='0')||(geny[x]=='0')||(msg.size()<geny.size()))
    {
        cout<<-1<<endl;
        return 0;
    }


    if(msg[0]=='1'){
    for (int i=1; i<x+1; i++)
    {

        if (msg[i]==geny[i])
        {
            temp[i-1]='0';
        }
        else
            temp[i-1]='1';
    }}
    else{
         for (int i=1; i<x+1; i++)
            {
                if (msg[i]=='0')
                {
                    temp[i-1]='0';
                }
                else
                    temp[i-1]='1';
            }
    }
    temp[x]=msg[j];
    j++;

    long long int msg_size=msg.size()+1;

    while (j<msg_size)
    {


        if(temp[0]=='1')
        {

            for (int i=1; i<x+1; i++)
            {
                if (temp[i]==geny[i])
                {
                    temp[i-1]='0';
                }
                else
                    temp[i-1]='1';
            }
        }
        else
        {
            for (int i=1; i<x+1; i++)
            {
                if (temp[i]=='0')
                {
                    temp[i-1]='0';
                }
                else
                    temp[i-1]='1';
            }
        }

        temp[x]=msg[j];

        j++;

    }


    cout <<answer<<temp << endl;
    return 0;
}

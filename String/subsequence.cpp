//Given a string S find all the possible subsequences of S;
//Date-8-Apr-2021

//Recursive apporoach

#include <bits/stdc++.h>
using namespace std;
void subsequence(string,string);

int main(int argc, char const *argv[])
{
    string ip;
    cin>>ip;

    string op="";
    subsequence(ip,op);
    
}

void subsequence(string ip,string op)
{
    if(ip.length()==0)
    {
        cout<<op<<endl;
        return;
    }
    string op1=op;
    string op2=op;

    op2.push_back(ip[0]);
    ip.erase(ip.begin()+0);

    subsequence(ip,op1);//we considered current character is not included

    subsequence(ip,op2);// current character is included
}


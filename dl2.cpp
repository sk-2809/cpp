#include<iostream>
using namespace std;
int main()
{
char x,Lowercase,Uppercase;
cin>>x;
Lowercase=(x=='a'||x=='e'||x=='i'||x=='o'||x=='u');
Uppercase=(x=='A'||x=='E'||x=='I'||x=='o'||x=='U');
if(x=Lowercase||Uppercase)
cout<<"your alphabet is vowel";
else
cout<<"your alphabet is consonent";
}

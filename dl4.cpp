#include<iostream>
#include<math.h>
using namespace std;
int main()
{
double a,b,c,D;
cin>>a>>b>>c;
D=b*b-4*a*c;
double x1 = (-b+sqrt(D))/(2*a);
double x2 = (-b-sqrt(D))/(2*a);
if(D>=0)
cout<<x1<<endl<<x2;
else
cout<<-b/(2*a)<<" +i"<<sqrt(-D)/(2*a)<<endl<<-b/(2*a)<<" -i"<<sqrt(-D)/(2*a);

}

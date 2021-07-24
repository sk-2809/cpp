#include<simplecpp>

main_program{
float a,b,c,d,e,f,g,h,i,j,k,l,A,B,C;
cout<<"give a";
cin>>a;
cout<<"give b";
cin>>b;
cout<<"give c";
cin>>c;
d=b*b+c*c-a*a;
e=2*b*c;
j=d/e;
A=arccosine(j);
f=a*a+c*c-b*b;
g=2*a*c;
k=f/g;
B=arccosine(k);
h=a*a+b*b-c*c;
i=2*a*b;
l=h/i;
C=arccosine(l);
turtleSim();
forward(a);right(180-C);
forward(b);right(180-A);
forward(c);

wait(10);
}

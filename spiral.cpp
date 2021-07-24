#include<simplecpp>

main_program
{
int n=1,i=1;
turtleSim();
cout<<"number of circle";
cin>>n;
repeat(n-1)
{
forward(10);right(360/n);
n=n+i;

}
wait(10);
}

#include<simplecpp>

main_program

{
int n,i=1;
cin>>n;

turtleSim();

repeat(n){
forward(10*i);right(90);forward(10*i+10);right(90);
i++;
}
wait(60);
}

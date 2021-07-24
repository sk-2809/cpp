#include<simplecpp>
main_program
{
int n;
cout<<"Number of sides";
cin>>n;
turtleSim();
left(90);
repeat(n){
forward(20);left(360/n);
}
repeat(n){

forward(20);right(360/n);}

wait(10);

}

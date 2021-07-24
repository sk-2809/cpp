#include<simplecpp>

main_program{
turtleSim();
int n;
cout<<"Number of sides";
cin>>n;
repeat(n)
{
forward(30);right(360/n);

}
repeat(n){
forward(30);left(360/n);
}
wait(10);
}

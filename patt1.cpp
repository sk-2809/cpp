#include<simplecpp>
main_program{

int n;
cin>>n;
turtleSim();
repeat(40){
forward(10);right(9);
repeat(n){
forward(10);right(360/n);
}
}
repeat(40){
forward(10);left(9);
repeat(n){
forward(10);left(360/n);
}
}
wait(10);
}

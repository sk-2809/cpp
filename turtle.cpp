#include<simplecpp>

main_program{
turtleSim();
int x;
cout<<"No of sides";
cin>>x;
repeat(x){forward(50);
right(360/x);
}
wait(3);
}

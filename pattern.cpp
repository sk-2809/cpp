#include<simplecpp>

main_program{
turtleSim();
int x;
cin>>x;
penUp();
right(90);forward(50);right(90);

        forward(15);repeat(x){penDown();
        right(120);forward(60);left(120);forward(30);left(120);
forward(60);right(120);penUp();forward(40);right(15);
}
wait(60);
}

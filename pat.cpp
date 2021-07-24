#include<simplecpp>

main_program{

turtleSim();
repeat(36){
    forward(20);
    repeat(27){
        forward(0.5);
        left(10);
    }
    repeat(28){
        forward(0.5);
        right(10);
    }

}
wait(10);
}

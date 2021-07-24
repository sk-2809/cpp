#include<simplecpp>

main_program{

    double n;
    cin >> n;

    turtleSim();

    repeat(n){
        forward(100);
        right (180-180/n);
    }

    wait (20);

}

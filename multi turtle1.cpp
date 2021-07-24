#include<simplecpp>
main_program
{
initCanvas();
Turtle k,l,m;
l.left(120);
m.left(240);
repeat(8){
k.forward(70);
l.forward(70);
m.forward(70);
k.left(45);
l.left(45);
m.left(45);
}
wait(10);
}

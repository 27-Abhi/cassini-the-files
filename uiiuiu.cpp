#include<simplecpp>

main_program{

initCanvas("First",800,800);
//rectangle();//()c,c,width,height)
//Rectangle r(0,400,40,30);//(coordinstes,coordinate,radius)3-circle
//Circle t(40,400,30);
Rectangle r(0,0,1600,1600);
Rectangle P(400,520,100,100);
Circle c11(800,100,100);
c11.setColor(YELLOW);
c11.setFill();
Circle c(400,1200,600);
Circle a(400,460,50);//top of rocket
c.setColor(GREEN);//earth
c.setFill();
Rectangle base(400,590,50,200);
base.setColor(BLACK);
base.setFill();
Rectangle det(475,515,100,50); //detach in second stage
Rectangle det2(326,515,100,50); //detach in second stage
Rectangle r11(350,660,80,10);
Rectangle r12(360,660,80,10);
Rectangle r13(370,660,80,10);
Rectangle r14(380,660,80,10);
Rectangle r15(390,660,80,10);
Rectangle r1(400,660,80,10);
Rectangle r2(410,660,80,10);
Rectangle r3(420,660,80,10);
Rectangle r4(430,660,80,10);
r1.setColor(YELLOW);
r1.setFill();
r2.setColor(YELLOW);
r2.setFill();
r3.setColor(YELLOW);
r3.setFill();
r4.setColor(YELLOW);
r4.setFill();
r11.setColor(YELLOW);
r11.setFill();
r12.setColor(YELLOW);
r12.setFill();
r13.setColor(YELLOW);
r13.setFill();
r14.setColor(YELLOW);
r14.setFill();
r15.setColor(YELLOW);
r15.setFill();
//double a[][2]={{0,700},{50,700},{70,725},{50,750},{0,750},{0,700}};
//double a[][2]= {{350,520},{400,520},{425,545},{400,570},{350,570},{350,520}};
//Polygon P(400,520,a,5);
/*increase the size of polygon later*/

Text T(400,520,"NASA");
T.setColor(BLUE);
T.setFill();
det.setColor(0x808080);
det.setFill();
det2.setColor(0x808080);
det2.setFill();
P.setColor(RED);
P.setFill();
r.setColor(BLUE);
r.setFill();
a.setColor(RED);
a.setFill();
P.left(90);
a.left(90);
T.left(90);
r1.left(90);
r2.left(90);
r3.left(90);
r4.left(90);
r11.left(90);
r12.left(90);
r13.left(90);
r14.left(90);
r15.left(90);
det.left(90);
det2.left(90);
base.left(90);
repeat(30)//liftoff
{
P.forward(10);
a.forward(10);
det.forward(10);
det2.forward(10);
base.forward(10);
r1.forward(10);
r2.forward(10);
r3.forward(10);
r4.forward(10);
r11.forward(10);
r12.forward(10);
r13.forward(10);
r14.forward(10);
r15.forward(10);
T.forward(10);
wait(0.05);
}//liftoff  done
//detachment process
det.rotate(45);
det2.rotate(-45);
det.forward(10);
det2.forward(10);
//P.rotate(10);
a.rotate(45);
base.left(90);
base.left(90);
base.forward(10);
r1.forward(1000);
r2.forward(1000);
r3.forward(1000);
r4.forward(1000);
r11.forward(1000);
r12.forward(1000);
r13.forward(1000);
r14.forward(1000);
r15.forward(1000);
repeat(5){
P.forward(10);
a.forward(30);
det.forward(20);
det2.forward(20);
base.forward(20);
r1.forward(10);
r2.forward(10);
r3.forward(10);
r4.forward(10);
r11.forward(10);
r12.forward(10);
r13.forward(10);
r14.forward(10);
r15.forward(10);
T.forward(10);
}
det.right(90);
det2.right(-90);
a.right(100);


repeat(63)
{
det.forward(10);
det2.forward(10);
a.forward(20);
P.forward(10);
base.forward(10);
T.forward(10);

wait(0.05);
}//detachment successfull
//c.forward(1000);
P.move(20,1200); //relative postiton
T.move(20,1200);
c.scale(1/10);
Circle c1(100,100,5);
c1.setColor(WHITE);
c1.setFill();
Circle C222(100,700,5);
C222.setColor(WHITE);
C222.setFill();
Circle c333(640,400,5);
c333.setColor(WHITE);
c333.setFill();
Circle c34(700,500,5);
c34.setColor(WHITE);
c34.setFill();
Circle c35(500,200,5);
c35.setColor(WHITE);
c35.setFill();
Circle c36(350,650,5);
c36.setColor(WHITE);
c36.setFill();
Circle c2(150,250,5);
c2.setColor(WHITE);
c2.setFill();
Circle c3(250,200,5);
c3.setColor(WHITE);
c3.setFill();
Circle c4(350,250,5);
c4.setColor(WHITE);
c4.setFill();
Circle c5(380,300,5);
c5.setColor(WHITE);
c5.setFill();
Circle c6(370,400,5);
c6.setColor(WHITE);
c6.setFill();
Circle c7(500,450,5);
c7.setColor(WHITE);
c7.setFill();
Circle c8(640,500,5);
c8.setColor(WHITE);
c8.setFill();
Circle c9(580,530,5);
c9.setColor(WHITE);
c9.setFill();
Circle c10(600,540,5);
c10.setColor(WHITE);
c10.setFill();
Circle c111(510,500,5);
c111.setColor(WHITE);
c111.setFill();
Circle c12(560,460,5);
c12.setColor(WHITE);
c12.setFill();
repeat(50)

/*add satellite opening
ignition- discuss
*/
  //check for the movement
  /*Remark- still slow. shift the stars out of the loop.
  check if it can be included in a fuction*/
{
P.forward(10);
T.forward(10);
//wait(0.05);
}
P.right(60);
T.move(1000,1000);
wait(1);
//T.left(60);\/*antenna opening*/
Rectangle ant(402,250,50,140);
ant.setColor(BLACK);
ant.setFill();

ant.left(30);
wait(1);
repeat(15)
{
ant.forward(10);
P.forward(10);
wait(0.05);
}
/*antenna opening successful*/
c11.scale(1/100000);

//move again and draw mars, asteriod, maybe stars
//mars
P.move(-500,300);
ant.move(-500,300);
//wait(1);
Circle mars(700,500,100);
mars.setColor(BROWN);
mars.setFill();
mars.right(180);
repeat(70)
{
mars.forward(15);
ant.forward(1);
P.forward(1);
wait(0.05);
}
//mars done
//asteroid belt start
Circle ast1(0,800,1000);
Circle ast2(0,800,1015);
Circle ast3(0,800,1010);
Circle ast4(0,800,1005);
ast1.right(180);
ast2.right(180);
ast3.right(180);
ast4.right(180);

repeat(90)
{
ast1.forward(9);
ast4.forward(9);
ast3.forward(9);
ast2.forward(9);
ant.forward(1);
P.forward(1);
wait(0.05);
}
ast1.move(10000,1000);
ast2.move(10000,1000);
ast3.move(10000,1000);
ast4.move(10000,1000);
//asteroid belt end
//jupiter start
Circle jup(1100,500,300);
jup.setColor(0xAA0CB);//CHANGE COLOUR
jup.setFill();
jup.right(180);
repeat(50){
jup.forward(10);
wait(0.05);
ant.forward(1);
P.forward(1);
}
//jupiter  orbit start
//P.left(300);
//ant.forward(9);
//moving planet instead of rocket
jup.left(55); //first goes on top
repeat(30)
{
jup.forward(10);
wait(0.05);
ant.forward(1);
P.forward(1);
//jup.forward(50);
//wait(0.5);
//jup.forward(50);
//wait(0.5);
}
jup.right(47); //rev part
repeat(40)
{
jup.forward(10);
wait(0.05);
ant.forward(1);
P.forward(1);
}
jup.right(82); //rev part
repeat(80){
jup.forward(10);
wait(0.05);
ant.forward(0.1);
P.forward(0.1);
}
jup.right(90); //rev part
repeat(80){
jup.forward(10);
wait(0.04);
ant.forward(0.1);
P.forward(0.1);
}
jup.right(90); //rev part
repeat(80){
jup.forward(10);
wait(0.02);
ant.forward(0.1);
P.forward(0.1);
}
jup.right(90); //last rev part
repeat(120){
jup.forward(10);
wait(0.01);
ant.forward(0.1);
P.forward(0.1);
}
/*repeat(30)
{ant.forward(10);
P.forward(10);
wait(0.01);
}
not required
*/
wait(10);
/*for(int i=0;i<360;i++)//to orbit around jupiter
{
P.left(i);
ant.left(i);
P.forward(5.23333);
ant.forward(5.23333);
wait(0.5);
}*/
}
//wait(10);
/*
int d=getClick();
int x=65536/d;
int y=65536%d;
cout<<x<<endl<<y;
*/



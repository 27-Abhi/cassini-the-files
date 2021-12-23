#include<simplecpp>

main_program{

initCanvas("First",800,800);
//rectangle();//()c,c,width,height)
//Rectangle r(0,400,40,30);//(coordinstes,coordinate,radius)3-circle
//Circle t(40,400,30);
Rectangle r(0,0,1600,1600);
Rectangle P(400,520,100,100);
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
repeat(50)
{
/*add satellite opening
ignition- discuss
*/
P.forward(10);
T.forward(10);
wait(0.05);
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

wait(10);

//move again and draw mars, asteriod, maybe stars
/*int d=getClick();
int x=65536/d;
int y=65536%d;
cout<<x<<endl<<y;
*/
}

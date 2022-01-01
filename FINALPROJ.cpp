#include<simplecpp>

main_program{
initCanvas("First",800,800);

//rectangle();//()c,c,width,height)
//Rectangle r(0,400,40,30);//(coordinstes,coordinate,radius)3-circle
//Circle t(40,400,30);
Rectangle r(0,0,1600,1600);

//on earth

Rectangle rr(0,0,1600,1600);
Circle ar(400,460,50);//top of rocket
Rectangle Pr(400,520,100,100);
Circle c11r(800,100,100);
c11r.setColor(WHITE);
c11r.setFill();
Rectangle cr(400,1200,1000,1100);

cr.setColor(BROWN);//earth

Rectangle bldg1(300,600,50,100);
bldg1.scale(2);
bldg1.setColor(WHITE);
bldg1.setFill();
Rectangle bldg3(351,620,50,10);
bldg3.setColor(BLACK);
bldg3.setFill();
Rectangle bldg2(480,600,50,100);
bldg2.setColor(WHITE);
bldg2.setFill();
bldg2.scale(2);
cr.setFill();
Rectangle bldg31(430,620,50,10);
bldg31.setColor(BLACK);
bldg31.setFill();
Rectangle baser(400,590,50,200);
baser.setColor(BLACK);
baser.setFill();
Rectangle detr(475,515,100,50); //detach in second stage
Rectangle det2r(326,515,100,50); //detach in second stage
Rectangle r11r(350,660,80,10);
Rectangle r12r(360,660,80,10);
Rectangle r13r(370,660,80,10);
Rectangle r14r(380,660,80,10);
Rectangle r15r(390,660,80,10);
Rectangle r1r(400,660,80,10);
Rectangle r2r(410,660,80,10);
Rectangle r3r(420,660,80,10);
Rectangle r4r(430,660,80,10);
r1r.setColor(YELLOW);
r1r.setFill();
r2r.setColor(YELLOW);
r2r.setFill();
r3r.setColor(YELLOW);
r3r.setFill();
r4r.setColor(YELLOW);
r4r.setFill();
r11r.setColor(YELLOW);
r11r.setFill();
r12r.setColor(YELLOW);
r12r.setFill();
r13r.setColor(YELLOW);
r13r.setFill();
r14r.setColor(YELLOW);
r14r.setFill();
r15r.setColor(YELLOW);
r15r.setFill();

Text S1(400,700,"LIFT OFF FROM CAPE CANAVEREL-15 OCT 1997");
Text Tr(400,520,"NASA");
Tr.setColor(BLUE);
Tr.setFill();
detr.setColor(0x808080);
detr.setFill();
det2r.setColor(0x808080);
det2r.setFill();
//Pr.setColor(Color("255, 213, 0"));
Pr.setColor(0x37e2ed);
Pr.setFill();
rr.setColor(BLUE);
rr.setFill();
ar.setColor(BLACK);
ar.setFill();
Pr.left(90);
ar.left(90);
Tr.left(90);
r1r.left(90);
r2r.left(90);
r3r.left(90);
r4r.left(90);
r11r.left(90);
r12r.left(90);
r13r.left(90);
r14r.left(90);
r15r.left(90);
detr.left(90);
det2r.left(90);
baser.left(90);

//test.setColor(Color("78, 230, 136"));
//test.setColor(0x41979c);
wait(5);
repeat(40)//liftoff
{
Pr.forward(10);
ar.forward(10);
detr.forward(10);
det2r.forward(10);
baser.forward(10);
r1r.forward(10);
r2r.forward(10);
r3r.forward(10);
r4r.forward(10);
r11r.forward(10);
r12r.forward(10);
r13r.forward(10);
r14r.forward(10);
r15r.forward(10);
Tr.forward(10);
wait(0.01);

}
//erase start
bldg1.scale(1/10000);
bldg2.scale(1/10000);
bldg3.scale(1/10000);
bldg31.scale(1/10000);

Pr.scale(1/10000);
ar.scale(1/10000);
detr.scale(1/10000);
det2r.scale(1/10000);
baser.scale(1/10000);
r1r.scale(1/10000);
r2r.scale(1/10000);
r3r.scale(1/10000);
r4r.scale(1/10000);
r11r.scale(1/10000);
r12r.scale(1/10000);
r13r.scale(1/10000);
r14r.scale(1/10000);
r15r.scale(1/10000);
cr.scale(1/1000);
c11r.scale(1/1000);
Tr.move(10000,10000);
S1.move(10000,100000);
//erase end
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
//left earth
Circle a(400,460,50);//top of rocket
Rectangle P(400,520,100,100);
Circle c11(800,100,100);
c11.setColor(WHITE);
c11.setFill();
Circle c(400,1200,600);

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


Text T(400,520,"NASA");
T.setColor(BLUE);
T.setFill();
det.setColor(0x808080);
det.setFill();
det2.setColor(0x808080);
det2.setFill();
P.setColor(0x37e2ed);
P.setFill();
r.setColor(BLUE);
r.setFill();
a.setColor(BLACK);
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
wait(0.01);
}//liftoff  done

//detachment process
Text S2(400,700,"DETACHMENT PROCESS");
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

wait(0.01);
}
S2.move(10000,10000);//detachment successfull
//c.forward(1000);
P.move(20,1200); //relative postiton
T.move(20,1200);
c.scale(1/10);

repeat(50)



  //check for the movement
  //Remark- still slow. shift the stars out of the loop.
  //check if it can be included in a fuction
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


//venus=mars
Text S3(400,700,"GRAVITY  ASSIST FROM VENUS(VENUS FLYBY)-26 APRIL 1998");
P.move(-500,300);
ant.move(-500,300);
//wait(1);
Circle mars(700,500,100);
mars.setColor(BROWN);
mars.setFill();
mars.right(160);
repeat(70)
{
mars.forward(15);
ant.forward(1);
P.forward(1);
wait(0.05);
}
S3.move(100000,1000000);
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
Text S4(400,700,"ASTEROID BELT FLYBY");
repeat(90)
{
ast1.forward(9);
ast4.forward(9);
ast3.forward(9);
ast2.forward(9);
ant.forward(1);
P.forward(1);
wait(0.01);
}
ast1.move(10000,1000);
ast2.move(10000,1000);
ast3.move(10000,1000);
ast4.move(10000,1000);
S4.move(100000,100000);
//asteroid belt end
//jupiter start
Circle jup(1100,500,300);
Text S5(400,700,"GRAVITY ASSIST JUPITER-30 DECEMBER 2000");
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

//
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
//rev around jupiter..22 orignially..scalled down to 1
//for(int rev=0;rev<5;rev++){
//float x=5;
//x=x/100;//to make it look like its gaining speed after rev
jup.right(47); //rev part
repeat(40)
{
jup.forward(10);
wait(0.05);
ant.forward(0.1);
P.forward(0.1);
}
jup.right(82); //rev part
repeat(80){
jup.forward(10);
wait(0.04);
ant.forward(0.1);
P.forward(0.1);
}
jup.right(90); //rev part
repeat(80){
jup.forward(10);
wait(0.03);
ant.forward(0.1);
P.forward(0.1);
}
jup.right(90); //rev part
repeat(80){
jup.forward(10);
wait(0.002);
ant.forward(0.1);
P.forward(0.1);
}
jup.right(90); //last rev part
repeat(120){
jup.forward(10);
//wait(0.001);
ant.forward(0.1);
P.forward(0.1);
}
S5.move(10000,10000);
//saturn entry
Text S6(400,700,"SATURN ORBIT INSERTION- 1 JULY 2004");
Circle sat(1100,500,200);
Line sat1(1100,400,1100,600);//rings of saturn
sat1.setColor(BLACK);
sat1.setFill();
sat1.scale(5);
sat.setColor(0x42aaad);//CHANGE COLOUR
//sat.setColor(Color("84, 128, 18"));
sat.setFill();
sat.right(180);
sat1.right(180);
repeat(50){
sat.forward(10);
sat1.forward(10);
//wait(0.05);
ant.forward(1);
P.forward(1);
}
S6.move(100000,100000);
//jupiter  orbit start
//P.left(300);
//ant.forward(9);
//moving planet instead of rocket
//
Text S7(400,700,"ORBITING SATURN");
sat.left(55);
sat1.left(55);
//sat1.rotate(-55);
//ring.left(55); //first goes on top
//ring.rotate(55);
repeat(30)
{
sat.forward(10);
sat1.forward(10);
//wait(0.05);
ant.forward(1);
P.forward(1);
//jup.forward(50);
//wait(0.5);
//jup.forward(50);
//wait(0.5);
}
//rev around upiter..22 orignially..scalled down to 5
//for(int rev=0;rev<5;rev++){
//float x=5;
//x=x/100;v
sat.right(47);
sat1.right(47);//stll stll are removed
//ring.right(47);
//ring.rotate(47); //rev part
repeat(40)
{
sat.forward(10);
sat1.forward(10);
//wait(0.05);
ant.forward(0.1);
P.forward(0.1);
}
sat.right(82);
sat1.right(82);
//ring.right(82);
//ring.rotate(82); //rev part
repeat(80){
sat.forward(10);
sat1.forward(10);
//wait(0.04);
ant.forward(0.1);
P.forward(0.1);
}
S7.move(100000,100000);
Text S8(400,700,"CASSINI ORBITED SATURN 297 TIMES");
sat.right(90); //rev part
sat1.right(90);
repeat(80){
sat.forward(10);
sat1.forward(10);
//wait(0.03);
ant.forward(0.1);
P.forward(0.1);
}
sat.right(90); //rev part
sat1.right(90);
repeat(80){
sat.forward(10);
sat1.forward(10);
//wait(0.002);
ant.forward(0.1);
P.forward(0.1);
}
sat.right(90); //last rev part
sat1.right(90);
repeat(40){
sat.forward(10);
sat1.forward(10);
//wait(0.001);
ant.forward(0.1);
P.forward(0.1);
}
S8.move(10000,10000);
Text S9(400,700,"THE GRAND FINALE:ENTERING SATURN ATMOSPHERE- 15 SEPTEMBER 2017");
P.left(245);
ant.forward(10);
ant.right(115); //CHECK

repeat(20)
{
sat.scale(1.03);
P.forward(5);
ant.forward(5);
wait(0.1);
sat1.scale(0.05);
}
//entering saturn atmosphere
sat.move(0,300);
sat.scale(1.3);
P.move(0,-100);
ant.scale(1/1000);

repeat(31)
{P.forward(10);
wait(0.2);}
S9.move(10000,10000);
repeat(10)
{Text END(400,700,"THE END");
END.scale(2);
wait(0.01);
}
//double a[][2]= {{350,520},{400,520},{425,545},{400,570},{350,570},{350,520}};
/*Circle blast(400,400,20);
blast.setColor(YELLOW);
blast.setFill();
repeat(10){
blast.scale(1.2);
wait(0.05);
P.scale(1/2);
}
*/
/*repeat(30)
{ant.forward(10);
P.forward(10);
wait(0.01);
}
NOT REQUIRED
*/
wait(10);
}
/*for(int i=0;i<360;i++)//to orbit around jupiter
{
P.left(i);
ant.left(i);
P.forward(5.23333);
ant.forward(5.23333);
wait(0.5);
}*/

//wait(10);
/*
int d=getClick();
int x=65536/d;
int y=65536%d;
cout<<x<<endl<<y;
*/



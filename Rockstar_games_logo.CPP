#include <graphics.h>
#include <conio.h>
#include<stdio.h>
#include<dos.h>
void capitalR()
     {   setcolor(RED);
	line (207+52,169,240+50,169);
	line (207+51,170,190+51,255) ;

	ellipse(289,195,270,450,13,9);   //small D
	line (276,186,290,186);
	line (272,205,290,205);
	line (276,187,272,205);         //

	ellipse(288,194,300,450,35,25);
	arc(305,227,5,90,10);
	line (315,227,315,254);
	arc (325,250,180,270,10);
	ellipse(320,250,190,270,23,10);
	line (296,231,297,252);

	arc(285,232,0,90,10);
    //	arc(276,230,90,180,10);
	line (218+52,222,238+50,222);          //
	line (217+52,223,210+52,255);   //
	line (190+52,255,210+52,255);
	//splash effects near R lower side
	putpixel(238,262,RED);
	putpixel(239,262,RED);
	putpixel(242,263,RED);
	putpixel(246,257,RED);
	circle(261,262,1);
	circle(246,270,1);
	circle(247,270,1);
	circle(247,270,1);
       //	splash effects of R upper part

			//
			circle(244,169,1);
			putpixel(244,169,1);
			circle(247,169,1);
			circle(252,182,1);
			circle(253,182,1);
			circle(254,182,1);
			putpixel(252,180,RED);
			circle(268,168,1);
			putpixel(252,163,RED);
			putpixel(290,160,RED);
       setfillstyle(SOLID_FILL,RED);
      floodfill(260,170,RED);
       setcolor(WHITE);
     }

  void drawstar(){
  int j=29,x=-30;
     for(int i=0;i<=170;i++){
     cleardevice();
      line(100+340-i+x,50+i+j,110+340-i+x,50+i+j);
     line(110+340-i+x,50+i+j,113+340-i+x,41+i+j);
     line(113+340-i+x,41+i+j,117+340-i+x,50+i+j);
     line(117+340-i+x,50+i+j,127+340-i+x,50+i+j);
     line(127+340-i+x,50+i+j,120+340-i+x,55+i+j);
     line(100+340-i+x,50+i+j,108+340-i+x,55+i+j);
     line(108+340-i+x,55+i+j,106+340-i+x,63+i+j);
     line(106+340-i+x,63+i+j,113+340-i+x,58+i+j);
     line(113+340-i+x,58+i+j,120+340-i+x,63+i+j);
     line(120+340-i+x,63+i+j,119+340-i+x,55+i+j);
     floodfill(110+340-i+x,53+i+j,WHITE);


     }
      line(100+340-i+x,50+i+j,110+340-i+x,50+i+j);
     line(110+340-i+x,50+i+j,113+340-i+x,41+i+j);
     line(113+340-i+x,41+i+j,117+340-i+x,50+i+j);
     line(117+340-i+x,50+i+j,127+340-i+x,50+i+j);
     line(127+340-i+x,50+i+j,120+340-i+x,55+i+j);
     line(100+340-i+x,50+i+j,108+340-i+x,55+i+j);
     line(108+340-i+x,55+i+j,106+340-i+x,63+i+j);
     line(106+340-i+x,63+i+j,113+340-i+x,58+i+j);
     line(113+340-i+x,58+i+j,120+340-i+x,63+i+j);
     line(120+340-i+x,63+i+j,119+340-i+x,55+i+j);
     floodfill(110+340-i+x,53+i+j,WHITE);
     delay(1000);
for(int b=0;b<=1;b++){
       for(int a=0;a<=10;a++){
       cleardevice();
     line(100+340-i+x+a,50+i+j,110+340-i+x+a,50+i+j);
     line(110+340-i+x+a,50+i+j,113+340-i+x+a,41+i+j);
     line(113+340-i+x+a,41+i+j,117+340-i+x+a,50+i+j);
     line(117+340-i+x+a,50+i+j,127+340-i+x+a,50+i+j);
     line(127+340-i+x+a,50+i+j,120+340-i+x+a,55+i+j);
     line(100+340-i+x+a,50+i+j,108+340-i+x+a,55+i+j);
     line(108+340-i+x+a,55+i+j,106+340-i+x+a,63+i+j);
     line(106+340-i+x+a,63+i+j,113+340-i+x+a,58+i+j);
     line(113+340-i+x+a,58+i+j,120+340-i+x+a,63+i+j);
     line(120+340-i+x+a,63+i+j,119+340-i+x+a,55+i+j);
     floodfill(110+340-i+x+a,53+i+j,WHITE);

     }
     delay(800);
       for(a=10;a>=0;a--){
       cleardevice();
     line(100+340-i+x-a,50+i+j,110+340-i+x-a,50+i+j);
     line(110+340-i+x-a,50+i+j,113+340-i+x-a,41+i+j);
     line(113+340-i+x-a,41+i+j,117+340-i+x-a,50+i+j);
     line(117+340-i+x-a,50+i+j,127+340-i+x-a,50+i+j);
     line(127+340-i+x-a,50+i+j,120+340-i+x-a,55+i+j);
     line(100+340-i+x-a,50+i+j,108+340-i+x-a,55+i+j);
     line(108+340-i+x-a,55+i+j,106+340-i+x-a,63+i+j);
     line(106+340-i+x-a,63+i+j,113+340-i+x-a,58+i+j);
     line(113+340-i+x-a,58+i+j,120+340-i+x-a,63+i+j);
     line(120+340-i+x-a,63+i+j,119+340-i+x-a,55+i+j);
     floodfill(110+340-i+x-a,53+i+j,WHITE);

     }
     delay(300);
}
cleardevice();
//delay(1000);
line(100+340-i+x,50+i+j,110+340-i+x,50+i+j);
     line(110+340-i+x,50+i+j,113+340-i+x,41+i+j);
     line(113+340-i+x,41+i+j,117+340-i+x,50+i+j);
     line(117+340-i+x,50+i+j,127+340-i+x,50+i+j);
     line(127+340-i+x,50+i+j,120+340-i+x,55+i+j);
     line(100+340-i+x,50+i+j,108+340-i+x,55+i+j);
     line(108+340-i+x,55+i+j,106+340-i+x,63+i+j);
     line(106+340-i+x,63+i+j,113+340-i+x,58+i+j);
     line(113+340-i+x,58+i+j,120+340-i+x,63+i+j);
     line(120+340-i+x,63+i+j,119+340-i+x,55+i+j);
     floodfill(110+340-i+x,53+i+j,WHITE);
       for(int a=0;a<=10;a++){
       cleardevice();
     line(100+340-i+x+a,50+i+j+a,110+340-i+x+a,50+i+j+a);
     line(110+340-i+x+a,50+i+j+a,113+340-i+x+a,41+i+j+a);
     line(113+340-i+x+a,41+i+j+a,117+340-i+x+a,50+i+j+a);
     line(117+340-i+x+a,50+i+j+a,127+340-i+x+a,50+i+j+a);
     line(127+340-i+x+a,50+i+j+a,120+340-i+x+a,55+i+j+a);
     line(100+340-i+x+a,50+i+j+a,108+340-i+x+a,55+i+j+a);
     line(108+340-i+x+a,55+i+j+a,106+340-i+x+a,63+i+j+a);
     line(106+340-i+x+a,63+i+j+a,113+340-i+x+a,58+i+j+a);
     line(113+340-i+x+a,58+i+j+a,120+340-i+x+a,63+i+j+a);
     line(120+340-i+x+a,63+i+j+a,119+340-i+x+a,55+i+j+a);
     floodfill(110+340-i+x+a,53+i+j+a,WHITE);

     }  for(a=0;a<=80;a++){

	 line(100+340-i+x+a,50+i+j,110+340-i+x+a,50+i+j);
     line(110+340-i+x+a,50+i+j,113+340-i+x+a,41+i+j);
     line(113+340-i+x+a,41+i+j,117+340-i+x+a,50+i+j);
     line(117+340-i+x+a,50+i+j,127+340-i+x+a,50+i+j);
     line(127+340-i+x+a,50+i+j,120+340-i+x+a,55+i+j);
     line(100+340-i+x+a,50+i+j,108+340-i+x+a,55+i+j);
     line(108+340-i+x+a,55+i+j,106+340-i+x+a,63+i+j);
     line(106+340-i+x+a,63+i+j,113+340-i+x+a,58+i+j);
     line(113+340-i+x+a,58+i+j,120+340-i+x+a,63+i+j);
     line(120+340-i+x+a,63+i+j,119+340-i+x+a,55+i+j);
     floodfill(110+340-i+x+a,53+i+j,WHITE);
     cleardevice();

     }

}
  void drawstar2(){
     line(100+380,50,110+380,50);
     line(110+380,50,113+380,41);
     line(113+380,41,117+380,50);
     line(117+380,50,127+380,50);
     line(127+380,50,120+380,55);
     line(100+380,50,108+380,55);
     line(108+380,55,106+380,63);
     line(106+380,63,113+380,58);
     line(113+380,58,120+380,63);
     line(120+380,63,119+380,55);
     floodfill(110+380,53,WHITE);
}
void drawstar3(){
     line(100+420,50,110+420,50);
     line(110+420,50,113+420,41);
     line(113+420,41,117+420,50);
     line(117+420,50,127+420,50);
     line(127+420,50,120+420,55);
     line(100+420,50,108+420,55);
     line(108+420,55,106+420,63);
     line(106+420,63,113+420,58);
     line(113+420,58,120+420,63);
     line(120+420,63,119+420,55);
     floodfill(110+420,53,WHITE);
}
void drawstar4(){
     line(100+460,50,110+460,50);
     line(110+460,50,113+460,41);
     line(113+460,41,117+460,50);
     line(117+460,50,127+460,50);
     line(127+460,50,120+460,55);
     line(100+460,50,108+460,55);
     line(108+460,55,106+460,63);
     line(106+460,63,113+460,58);
     line(113+460,58,120+460,63);
     line(120+460,63,119+460,55);
     floodfill(110+460,53,WHITE);
}
void drawstar5(){
     line(100+500,50,110+500,50);
     line(110+500,50,113+500,41);
     line(113+500,41,117+500,50);
     line(117+500,50,127+500,50);
     line(127+500,50,120+500,55);
     line(100+500,50,108+500,55);
     line(108+500,55,106+500,63);
     line(106+500,63,113+500,58);
     line(113+500,58,120+500,63);
     line(120+500,63,119+500,55);
     floodfill(110+500,53,WHITE);
}
int main() {
    int gd = DETECT, gm,i=0;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    drawstar5();
    delay(1000);
    drawstar4();
delay(1000);
    drawstar3();
delay(1000);
    drawstar2();
delay(1000);

   line(100+340+i,50+i,110+340+i,50+i);
     line(110+340+i,50+i,113+340+i,41+i);
     line(113+340+i,41+i,117+340+i,50+i);
     line(117+340+i,50+i,127+340+i,50+i);
     line(127+340+i,50+i,120+340+i,55+i);
     line(100+340+i,50+i,108+340+i,55+i);
     line(108+340+i,55+i,106+340+i,63+i);
     line(106+340+i,63+i,113+340+i,58+i);
     line(113+340+i,58+i,120+340+i,63+i);
     line(120+340+i,63+i,119+340+i,55+i);
     floodfill(110+340+i,53+i,WHITE);
     delay(500);

    line(100+340+i,50+i,110+340+i,50+i);
     line(110+340+i,50+i,113+340+i,41+i);
     line(113+340+i,41+i,117+340+i,50+i);
     line(117+340+i,50+i,127+340+i,50+i);
     line(127+340+i,50+i,120+340+i,55+i);
     line(100+340+i,50+i,108+340+i,55+i);
     line(108+340+i,55+i,106+340+i,63+i);
     line(106+340+i,63+i,113+340+i,58+i);
     line(113+340+i,58+i,120+340+i,63+i);
     line(120+340+i,63+i,119+340+i,55+i);
     floodfill(110+340+i,53+i,WHITE);
     cleardevice();
     delay(500);

     drawstar5();
     drawstar4();
    drawstar3();

    drawstar2();


   line(100+340+i,50+i,110+340+i,50+i);
     line(110+340+i,50+i,113+340+i,41+i);
     line(113+340+i,41+i,117+340+i,50+i);
     line(117+340+i,50+i,127+340+i,50+i);
     line(127+340+i,50+i,120+340+i,55+i);
     line(100+340+i,50+i,108+340+i,55+i);
     line(108+340+i,55+i,106+340+i,63+i);
     line(106+340+i,63+i,113+340+i,58+i);
     line(113+340+i,58+i,120+340+i,63+i);
     line(120+340+i,63+i,119+340+i,55+i);
     floodfill(110+340+i,53+i,WHITE);
     cleardevice();
     delay(500);

       drawstar5();
     drawstar4();
    drawstar3();

    drawstar2();


   line(100+340+i,50+i,110+340+i,50+i);
     line(110+340+i,50+i,113+340+i,41+i);
     line(113+340+i,41+i,117+340+i,50+i);
     line(117+340+i,50+i,127+340+i,50+i);
     line(127+340+i,50+i,120+340+i,55+i);
     line(100+340+i,50+i,108+340+i,55+i);
     line(108+340+i,55+i,106+340+i,63+i);
     line(106+340+i,63+i,113+340+i,58+i);
     line(113+340+i,58+i,120+340+i,63+i);
     line(120+340+i,63+i,119+340+i,55+i);
     floodfill(110+340+i,53+i,WHITE);

     cleardevice();
     delay(500);


       drawstar5();
     drawstar4();
    drawstar3();

    drawstar2();


   line(100+340+i,50+i,110+340+i,50+i);
     line(110+340+i,50+i,113+340+i,41+i);
     line(113+340+i,41+i,117+340+i,50+i);
     line(117+340+i,50+i,127+340+i,50+i);
     line(127+340+i,50+i,120+340+i,55+i);
     line(100+340+i,50+i,108+340+i,55+i);
     line(108+340+i,55+i,106+340+i,63+i);
     line(106+340+i,63+i,113+340+i,58+i);
     line(113+340+i,58+i,120+340+i,63+i);
     line(120+340+i,63+i,119+340+i,55+i);
     floodfill(110+340+i,53+i,WHITE);
      drawstar5();
    drawstar4();

    drawstar3();

    drawstar2();


   line(100+340+i,50+i,110+340+i,50+i);
     line(110+340+i,50+i,113+340+i,41+i);
     line(113+340+i,41+i,117+340+i,50+i);
     line(117+340+i,50+i,127+340+i,50+i);
     line(127+340+i,50+i,120+340+i,55+i);
     line(100+340+i,50+i,108+340+i,55+i);
     line(108+340+i,55+i,106+340+i,63+i);
     line(106+340+i,63+i,113+340+i,58+i);
     line(113+340+i,58+i,120+340+i,63+i);
     line(120+340+i,63+i,119+340+i,55+i);
     floodfill(110+340+i,53+i,WHITE);
     delay(500);

    line(100+340+i,50+i,110+340+i,50+i);
     line(110+340+i,50+i,113+340+i,41+i);
     line(113+340+i,41+i,117+340+i,50+i);
     line(117+340+i,50+i,127+340+i,50+i);
     line(127+340+i,50+i,120+340+i,55+i);
     line(100+340+i,50+i,108+340+i,55+i);
     line(108+340+i,55+i,106+340+i,63+i);
     line(106+340+i,63+i,113+340+i,58+i);
     line(113+340+i,58+i,120+340+i,63+i);
     line(120+340+i,63+i,119+340+i,55+i);
     floodfill(110+340+i,53+i,WHITE);
     cleardevice();
     delay(500);

     drawstar5();
     drawstar4();
    drawstar3();

    drawstar2();


   line(100+340+i,50+i,110+340+i,50+i);
     line(110+340+i,50+i,113+340+i,41+i);
     line(113+340+i,41+i,117+340+i,50+i);
     line(117+340+i,50+i,127+340+i,50+i);
     line(127+340+i,50+i,120+340+i,55+i);
     line(100+340+i,50+i,108+340+i,55+i);
     line(108+340+i,55+i,106+340+i,63+i);
     line(106+340+i,63+i,113+340+i,58+i);
     line(113+340+i,58+i,120+340+i,63+i);
     line(120+340+i,63+i,119+340+i,55+i);
     floodfill(110+340+i,53+i,WHITE);
     cleardevice();
     delay(500);

       drawstar5();
     drawstar4();
    drawstar3();

    drawstar2();


   line(100+340+i,50+i,110+340+i,50+i);
     line(110+340+i,50+i,113+340+i,41+i);
     line(113+340+i,41+i,117+340+i,50+i);
     line(117+340+i,50+i,127+340+i,50+i);
     line(127+340+i,50+i,120+340+i,55+i);
     line(100+340+i,50+i,108+340+i,55+i);
     line(108+340+i,55+i,106+340+i,63+i);
     line(106+340+i,63+i,113+340+i,58+i);
     line(113+340+i,58+i,120+340+i,63+i);
     line(120+340+i,63+i,119+340+i,55+i);
     floodfill(110+340+i,53+i,WHITE);

     cleardevice();
     delay(500);


       drawstar5();
     drawstar4();
    drawstar3();

    drawstar2();


   line(100+340+i,50+i,110+340+i,50+i);
     line(110+340+i,50+i,113+340+i,41+i);
     line(113+340+i,41+i,117+340+i,50+i);
     line(117+340+i,50+i,127+340+i,50+i);
     line(127+340+i,50+i,120+340+i,55+i);
     line(100+340+i,50+i,108+340+i,55+i);
     line(108+340+i,55+i,106+340+i,63+i);
     line(106+340+i,63+i,113+340+i,58+i);
     line(113+340+i,58+i,120+340+i,63+i);
     line(120+340+i,63+i,119+340+i,55+i);
     floodfill(110+340+i,53+i,WHITE);
     delay(800);

     cleardevice();
     delay(500);
       drawstar5();
     drawstar4();
    drawstar3();

    drawstar2();


   line(100+340+i,50+i,110+340+i,50+i);
     line(110+340+i,50+i,113+340+i,41+i);
     line(113+340+i,41+i,117+340+i,50+i);
     line(117+340+i,50+i,127+340+i,50+i);
     line(127+340+i,50+i,120+340+i,55+i);
     line(100+340+i,50+i,108+340+i,55+i);
     line(108+340+i,55+i,106+340+i,63+i);
     line(106+340+i,63+i,113+340+i,58+i);
     line(113+340+i,58+i,120+340+i,63+i);
     line(120+340+i,63+i,119+340+i,55+i);
     floodfill(110+340+i,53+i,WHITE);
     delay(2000);
     drawstar();

     //star
    setcolor(RED);
    line (305,259,323,259);
    line(306,260,324,260);
    line (323,259,335,237);
    line(324,260,336,238);
    line (335,237,335,259);
    line(336,238,336,260);
    line (335,259,358,259);
    line(336,260,359,260);
    line (358,259,338,270);
    line(359,260,339,271);
    line(338,270,340,292);
    line(339,271,341,293);
    line (340,292,326,275);
    line(341,293,327,276);
    line(326,275,308,291);
    line(327,276,308,292);
    line(308,291,316,270);
    line(309,292,317,271);
    line(316,270,305,259);
    line(317,271,306,260);

 // setfillstyle(SOLID_FILL,RED);
 // floodfill(310-i,260,RED);


    // DrawR();
//square!!!

 line (198+3,140,380,140);
    ellipse (380-5,150+5,0,90,15,15);
    line (390,148+7,390,310);
    ellipse (200+5,150+5,90,180,15,15);
    line (380,320,200,320);
    ellipse (200+5,310-5,180,270,15,15);
    line (190,150,190,310);
    ellipse (380-5,310-5,270,360,15,15);

     // setfillstyle(SOLID_FILL,RED);
     // floodfill(260,165,WHITE);





    capitalR();
    //iske baad star h originally ganesh waaala
  setcolor(RED);
  //setting black borders for star
    line (305,259,323,259);
    line (323,259,335,237);
    line (335,237,335,259);
    line (335,259,358,259);
    line (358,259,338,270);
    line (338,270,340,292);
    line (340,292,326,275);
    line (326,275,308,291);
    line (308,291,316,270);
    line (316,270,305,259);
    //here borders black for square
  /*   line (198+3,140,380,140);
    ellipse (380-5,150+5,0,90,15,15);
    line (390,148+7,390,310);
    ellipse (200+5,150+5,90,180,15,15);
    line (380,320,200,320);
    ellipse (200+5,310-5,180,270,15,15);
    line (190,150,190,310);
    ellipse (380-5,310-5,270,360,15,15);*/
    circle(390,319,2);
    putpixel(390,319,RED);






    for(i=0;i<=400;i++) {
    cleardevice();
    setcolor(RED);
     line (305-i,259,323-i,259);
    line (323-i,259,335-i,237);
    line (335-i,237,335-i,259);
    line (335-i,259,358-i,259);
    line (358-i,259,338-i,270);
    line (338-i,270,340-i,292);
    line (340-i,292,326-i,275);
    line (326-i,275,308-i,291);
    line (308-i,291,316-i,270);
    line (316-i,270,305-i,259);
      circle(390-i,319,2);
    putpixel(390-i,319,RED);

   // setfillstyle(SOLID_FILL,WHITE);
  // floodfill(310-i,260,WHITE);


    // DrawR();
//square!!!
line (198+3-i,140,380-i,140);
    ellipse (380-5-i,150+5,0,90,15,15);
    line (390-i,148+7,390-i,310);
    ellipse (200+5-i,150+5,90,180,15,15);
    line (380-i,320,200-i,320);
    ellipse (200+5-i,310-5,180,270,15,15);
    line (190-i,150,190-i,310);
    ellipse (380-5-i,310-5,270,360,15,15);
  //    setfillstyle(SOLID_FILL,BLUE);
//      floodfill(260-i,165,WHITE);
 setcolor(RED);
	line (207+52-i,169,240+50-i,169);
	line (207+51-i,170,190+51-i,255) ;

	ellipse(289-i,195,270,450,13,9);   //small D
	line (276-i,186,290-i,186);
	line (272-i,205,290-i,205);
	line (276-i,187,272-i,205);         //

	ellipse(288-i,194,300,450,35,25);
	arc(305-i,227,5,90,10);
	line (315-i,227,315-i,254);
	arc (325-i,250,180,270,10);
	ellipse(320-i,250,190,270,23,10);
	line (296-i,231,297-i,252);

	arc(285-i,232,0,90,10);
    //	arc(276,230,90,180,10);
	line (218+52-i,222,238+50-i,222);          //
	line (217+52-i,223,210+52-i,255);   //
	line (190+52-i,255,210+52-i,255);
	//splash effects near R lower side
	putpixel(238-i,262,RED);
	putpixel(239-i,262,RED);
	putpixel(242-i,263,RED);
	putpixel(246-i,257,RED);
	circle(261-i,262,1);
	circle(246-i,270,1);
	circle(247-i,270,1);
	circle(247-i,270,1);
       //	splash effects of R upper part

			//
			circle(244-i,169,1);
			putpixel(244-i,169,1);
			circle(247-i,169,1);
			circle(252-i,182,1);
			circle(253-i,182,1);
			circle(254-i,182,1);
			putpixel(252-i,180,RED);
			circle(268-i,168,1);
			putpixel(252-i,163,RED);
			putpixel(290-i,160,RED);
       setfillstyle(SOLID_FILL,RED);
      floodfill(260-i,170,RED);
       setcolor(WHITE);



   // capitalR();
   /*
	line (207+50-i,160,240+50-i,160);
	line (207+50-i,160,190+50-i,255) ;

	ellipse(290-1-i,190,270,450,13,11);   //small D
	line (274-i,179,290-i,179);
	line (270-i,201,290-i,201);
	line (273-i,180,270-i,200);         //

	ellipse(290-i,190,300,450,35,30);
	arc(305-i,227,5,90,10);
	line (315-i,227,315-i,254);
	arc (325-i,250,180,270,10);
	ellipse(320-i,250,190,270,23,10);
	line (294-i,225,298-i,254);

	arc(285-i,230,0,90,10);
    //	arc(276-,230,90,180,10);
	line (218+50-i,220,238+50-i,220);          //
	line (217+50-i,220,210+50-i,255);   //
	line (190+50-i,255,210+50-i,255);
     //	setfillstyle(SOLID_FILL,BLACK);
       //	floodfill(260-i,165,WHITE);
       */

    //iske baad star h originally ganesh waaala
//  setcolor(BLACK);
   /* line (305-i,259,323-i,259);
    line (323-i,259,335-i,237);
    line (335-i,237,335-i,259);
    line (335-i,259,358-i,259);
    line (358-i,259,338-i,270);
    line (338-i,270,340-i,292);
    line (340-i,292,326-i,275);
    line (326-i,275,308-i,291);
    line (308-i,291,316-i,270);
    line (316-i,270,305-i,259);
    } */






}






    closegraph();

    return 0;


}

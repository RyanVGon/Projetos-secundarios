float x1 = 0, y1 = 0, t1 = PI, r1 = 100;
float x2 = 0, y2 = 0, t2 = PI, r2 = 100;
int incT1 = 4, incT2 = 1; //change this ratio and you ll get the drawing (t2 < t1)
float accuracy = 10000.0;
float end = 0;
void setup() {
  size(600, 600);
  background(0);

  stroke(255);
  strokeWeight(1);
  end = (incT1 - incT2 + 2) * 2 * PI;
  
}

void draw() {
  //background(0);

  translate(300, 300);
  //for(int i = 0; i < 1000; i++){
  while (t1 < end) {
    x1 = r1 * sin(t1);
    y1 = r1 * cos(t1);

    x2 = x1 + r2 * sin(t2);
    y2 = y1 + r2 * cos(t2);

    t1 += incT1 / accuracy;
    t2 += incT2 / accuracy;
    point(x2, y2);
  }


  //line(0,0,x1,y1);
  //line(x1,y1,x2,y2);

  //circle(x1,y1,r1/10);
  //circle(x2,y2,r2/10);
}

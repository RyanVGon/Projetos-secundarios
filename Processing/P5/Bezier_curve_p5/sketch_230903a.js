let speed = 0.01;

function setup() {
  createCanvas(600,600);
  v = p5.Vector;
  
  ponto = new Point(100,100);  
  ponto2  = new Point(250,200);
  ponto3 = new Point(500,100);
  ponto4 = new Point(500,250);
  
  //ponto4 = new Point(100,100,ponto.pos,ponto2.pos);
  //ponto5 = new Point(250,200,ponto2.pos,ponto3.pos);
  
  //ponto6 = new Point(100,100,ponto4.pos,ponto5.pos);
  
  ponto6 = new Point(0,0);
  background(0);
}

let t = 0;
function draw() {
  background(0);
  strokeWeight(6);
  stroke(255);
  noFill();
  
  ponto.show();
  ponto2.show();
  ponto3.show();
  ponto4.show();

  //ponto4.show();
  //ponto5.show();
  //ponto6.show();
  beginShape();
  for(t = 0; t < 1; t+= 0.001){
    //ponto4.update(t, ponto.pos, ponto2.pos);
    //ponto5.update(t, ponto2.pos, ponto3.pos);
    //ponto6.update(t, ponto4.pos, ponto5.pos);
    a = v.lerp(ponto.pos, ponto2.pos,t);
    b = v.lerp(ponto2.pos, ponto3.pos,t);
    c = v.lerp(ponto3.pos, ponto4.pos,t);
    
    ab = v.lerp(a,b,t);
    bc = v.lerp(b,c,t);
    
    ponto6.pos = v.lerp(ab, bc, t);
    vertex(ponto6.pos.x,ponto6.pos.y);
  }
  endShape();
  ponto2.pos = createVector(mouseX,mouseY);
 
}

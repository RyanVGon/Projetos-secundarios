void setup(){
  size(800,400);
  strokeWeight(1);
  stroke(255);
  noFill();
}

void draw(){
  float time = 0;
  beginShape();
  for(int x = 0; x < width; x++){
    time += 0.01;
    int y = floor(map(noise(time),0,1,50,350));
    vertex(x,y);
  }
  endShape();
}

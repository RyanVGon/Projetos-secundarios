float increment = 0.1;
int scale = 10;
int cols, rows; 

void setup(){
  size(200,200);
  cols = floor(width / scale);
  rows = floor(height / scale);
  strokeWeight(1);
  frameRate(60);
  //background(0);
}

void draw(){
  background(255);
  println(frameRate);
  
  //int detail = floor(map(mouseX, 0, width, 1, 8));
  //float falloff = map(mouseY, 0, height, 0.1, 0.6);
  //noiseDetail(detail, falloff);
  float zoff = 0.0;
  float xoff = 0.0;
  for(int x = 0;x < width; x++){
    
    float yoff = 0.0;
    for(int y = 0;y < height; y++){
      yoff += increment;
      float angle = noise(xoff,yoff,zoff) * TWO_PI;
      PVector v = PVector.fromAngle(angle);
      push();
        translate(x*scale,y*scale);
        rotate(v.heading());
        line(0,0,scale,0);
      pop();
    }
    xoff += increment;
    zoff += 0.1;
  }
  
}

float increment = 0.02;


float b = 51.4;
void setup(){
  size(400,400);
  //background(0);
}

void draw(){
  
  //int detail = floor(map(mouseX, 0, width, 1, 8));
  //float falloff = map(mouseY, 0, height, 0.1, 0.6);
  //noiseDetail(detail, falloff);
  
  noiseDetail(8);
  
  float xoff = 0.0;
  loadPixels();
  for(int x = 0;x < width; x++){
    xoff += increment;
    float yoff = 0.0;
    for(int y = 0;y < height; y++){
      yoff += increment;
      float r = noise(xoff,yoff) * 255;
      int col = floor(r);
      pixels[x+y*width] = color(col);
    }
  }
  updatePixels();
}

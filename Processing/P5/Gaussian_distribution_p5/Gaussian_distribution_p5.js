function setup() {
  noiseDetail(5);
  createCanvas(400, 400);
  background(100);
  loadPixels();
  offset = 0;
  
}

function draw() {
  offset+=0.008;
  xoff=0+offset;
  for (x = 0; x < width; x++) {
    yoff = 0;
    for (y = 0; y < height; y++) {
        grey = map(noise(xoff,yoff),0,1,0,255);
        set(x,y,color(grey,grey,grey));
        yoff+=0.01;
    }
    xoff+=0.01;
  }
  updatePixels();
}

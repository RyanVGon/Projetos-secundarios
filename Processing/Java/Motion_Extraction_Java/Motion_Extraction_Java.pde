import processing.video.*;
float speed = 1;
float sense = 0.2;
Movie movie1;
Movie movie2;
Movie normal;
int xSize;
int ySize;
String video;

void setup() {
  size(1280, 360);
  xSize = width;
  ySize = height;

  video = "video1.mov";

  movie1 = new Movie(this, video);
  movie2 = new Movie(this, video);
  normal = new Movie(this, video);


  movie1.loop();
  movie2.loop();
  normal.loop();

  movie1.speed(speed);
  movie2.speed(speed);
  normal.speed(speed);

  //movie1.jump(movie1.duration());
  //movie2.jump(movie2.duration());
  //normal.jump(normal.duration());
  movie2.jump(sense);
}

void draw() {

  tint(255);
  image(movie2, 0, 0, width/2, height);
  filter(INVERT);
  tint(255, 128);
  image(movie1, 0, 0, width/2, height);
  tint(255);
  image(normal, width/2, 0, width/2, height);
  //movie2.pause();
  //movie1.pause();
  //normal.pause();
}

// Called every time a new frame is available to read
void movieEvent(Movie m) {
  if (m == movie1) {
    movie1.read();
  } else if (m == movie2) {
    movie2.read();
  } else if (m == normal) {
    normal.read();
  }
}

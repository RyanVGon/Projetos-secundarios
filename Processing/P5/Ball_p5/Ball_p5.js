
var Width = 400, Height = 400;
var qtd = 100;

function setup() {
  createCanvas(Width, Height);
  colorMode(HSB, 255);
  for (var i = 0; i < qtd; i++) {
    ball[i] = new ball();
  }
}

function draw() {
  background(0);
  for (var i = 0; i < qtd; i++) {
    ball[i].move();
  }
}

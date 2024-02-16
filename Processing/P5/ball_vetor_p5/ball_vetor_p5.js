var vel;
var diam = 30;
var grav;
var xdis;
var ydis;

//quando chega no fundo da tela parece areia

function setup() {
  createCanvas(400, 400);
  pos = createVector(200, 200);
  vel = p5.Vector.random2D();
  wid = createVector();
  grav = createVector(0, 0.2, 0);
  slidergrav = createSlider(0, 1, grav.y, 0.1);
  slidergrav.size(150, 60);
}


function draw() {
  background(100);

  if (mouseIsPressed && (mouseX >= 0 && mouseX <= 400) && (mouseY >= 0 && mouseY <= 400)) {
    var xspeed = winMouseX - pwinMouseX;
    var yspeed = winMouseY - pwinMouseY;

    pos.set(mouseX, mouseY);
    vel.set(xspeed, yspeed);
    circle(pos.x, pos.y, diam);
  } else {
    vel.limit(40, 40, 0);
    pos.limit(800, 800, 0);
    
    var wid = createVector(400, pos.y, pos.z);
    var hei = createVector(pos.x, 400, pos.z);
    
    xdis = pos.dist(wid);
    ydis = pos.dist(hei);
    
    if (xdis <= 15) {
      pos.set(385, pos.y);
      vel.mult(-0.98, 1, 1)
    }
    
    if (xdis >= 385) {
      pos.set(15, pos.y);
      vel.mult(-0.98, 1, 1);
    }
    
    if (ydis <= 15) {
      pos.set(pos.x, 385);
      vel.mult(1, -0.98, 1);
    }
    
    if (ydis >= 385) {
      pos.set(pos.x, 15);
      vel.mult(1, -0.98, 1);
    }
    
    vel.add(grav);
    vel.mult(0.997); // resistencia do ar 0,3%
    pos.add(vel);
    
    circle(pos.x, pos.y, diam);
  }
  grav.set(0, slidergrav.value(), 0);
}

let ball;
let diam = 20;
let radius = diam/2;
let vel;
let accel;
let p1 = 0;
let p2 = 0;
let diff;

let maxSpeed = 100;
let sSpeed = 3;

let sliders;

function setup() {
  createCanvas(400, 400);
  ball = createVector(width/2, height/2);
  vel = createVector(random([-sSpeed,sSpeed]),random(-sSpeed,sSpeed));
  accel = 1.0005;
  sliders = [];
  sliders.push(new slider(0, height/2, 10, 75, 10));
  sliders.push(new slider(width, height/2, 10, 75, -10));
  
  diff = createSlider(1,1.01,1.0005,0.0005);
  
  rectMode(CENTER);
  textAlign(CENTER,CENTER);
  textSize(20);
  fill(255);
  noStroke();
}


function draw() {
  background(70);
  
  accel = diff.value();

  ball.add(vel);
  vel.mult(accel);
  vel.x = constrain(vel.x, -maxSpeed, maxSpeed);
  vel.y = constrain(vel.y, -maxSpeed, maxSpeed);

  //verificar o input para a barra da esquerda
  if (keyIsDown(87)) {
    sliders[0].y += -3;
  }
  if (keyIsDown(83)) {
    sliders[0].y += 3;
  }
  let s0 = sliders[0];
  s0.y = constrain(s0.y, s0.pad + s0.h/2, height - s0.pad - s0.h/2);

  //verificar o input para a barra da direita
  if (keyIsDown(UP_ARROW)) {
    sliders[1].y += -3;
  }
  if (keyIsDown(DOWN_ARROW)) {
    sliders[1].y += 3;
  }
  let s1 = sliders[1];
  s1.y = constrain(s1.y, -s1.pad + s1.h/2, height + s1.pad - s1.h/2);



  //testar colisao para a barra da esquerda
  if (ball.x - radius < s0.x + s0.w) {
    if (ball.x + radius > s0.x - s0.w) {
      if (ball.y + radius > s0.y - s0.h/2) {
        if (ball.y - radius < s0.y + s0.h/2) {
          vel.x = -vel.x;
          ball.x = s0.x + s0.w/2 + radius + 5;
        }
      }
    }
  }

  //testar colisao para a barra da direita
  if (ball.x + radius > s1.x - s1.w) {
    if (ball.x - radius < s1.x + s1.w) {
      if (ball.y + radius > s1.y - s1.h/2) {
        if (ball.y - radius < s1.y + s1.h/2) {
          vel.x = -vel.x;
          ball.x = s1.x - s1.w/2 - radius - 5;
        }
      }
    }
  }
  
  
  //colisao do teto
  if(ball.y - radius < 0){
    vel.y = -vel.y;
    ball.y = radius;
  }
  //colisao do chao
  if(ball.y + radius > height){
    vel.y = -vel.y;
    ball.y = height -radius;
  }
  
  //pontuar esquerda
  if (ball.x - radius > width + radius){
    p1++;
    ball.set(width/2,height/2);
    vel.set(random([-sSpeed,sSpeed]),random(-sSpeed,sSpeed));
  }
  
  //pontuar direita
  if (ball.x + radius < -radius){
    p2++;
    ball.set(width/2,height/2);
    vel.set(random([-sSpeed,sSpeed]),random(-sSpeed,sSpeed));
  }
  
  
  



  //renderizar os objetos
  for (let s of sliders) {
    s.render();
  }
  circle(ball.x, ball.y, diam);
  text(p1, width/2 - 70, 25);
  text(p2, width/2 + 70, 25);
}


class slider {
  constructor(x, y, w, h, padding) {
    this.x = x;
    this.y = y;
    this.w = w;
    this.h = h;
    this.pad = padding;
  }

  render() {
    rect(this.x + this.pad, this.y, this.w, this.h);
  }
}

//let bob;
//let anchor;
//let spring;

let particles = [];
let springs = [];
let space = 250;
let rest = 200;
let k = 0.01;
let gravity;

function setup() {
  createCanvas(3000, 3000);
  //bob = new Particle(300,300);
  //anchor = new Particle(300,50);
  //spring = new Spring_o(k,rest,bob,anchor);
  gravity = createVector(0, 0.1, 0);
  for (let i = 0; i < 2; i++) {
    let cor = color(random(255), random(255), random(255));
    particles[i] = new Particle(width/2, i * space + 30, cor);
    if (i != 0) {
      let a = particles[i];
      let b = particles[i-1];
      let spring = new Spring_o(k, rest, a, b);
      springs.push(spring);
    }
  }
  
  //let spring = new Spring_o(k, rest, particles[particles.length - 1], particles[0]);
  //    springs.push(spring);
  
  particles[0].locked = true;
  particles[particles.length - 1].locked = false;
}


function draw() {
  background(0);
  noStroke();
  fill(255);
  stroke(255);

  for (let p of particles) {
    p.update();
    //p.show();
  }
  for (let s of springs) {
    s.update();
    s.show();
  }
  move();


  particles[particles.length - 1].show();





  //middle particle floor((particles.length - 1) / 2)
}


function move() {
  if (mouseIsPressed) {
    let pt = particles[particles.length - 1];
    //smooth
    //pt.pos.y += (mouseY - pt.pos.y) / 10;
    //pt.pos.x += (mouseX - pt.pos.x) / 10;

    pt.pos.y = mouseY;
    pt.pos.x = mouseX;

    pt.vel.set(0, 0);
  }
}

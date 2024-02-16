class Particle {
  constructor(x, y, cor, locked = false) {
    this.locked = locked;
    this.accel = createVector(0, 0);
    this.vel = createVector(0, 0);
    this.pos = createVector(x, y);
    this.mass = 1;
    this.size = 25;
    this.cor = cor;
  }

  applyForce(force) {
    // F = A
    this.vel.add(force.div(this.mass));
    this.vel.add(gravity);

    this.vel.mult(0.99);
  }
  
  update(){
    if(!this.locked){
      this.pos.add(this.vel);
    }
  }

  show() {
    strokeWeight(1);
    stroke(255);
    fill(this.cor);
    circle(this.pos.x, this.pos.y, this.size);
  }
}

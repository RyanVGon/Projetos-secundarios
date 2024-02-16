class Vehicle{
  constructor(mspeed, mforce, x = 200, y = 200){
    this.maxspeed = mspeed;
    this.maxforce = mforce;
    this.velocity = createVector(0,0);
    this.pos = createVector(x, y);
    this.desired = createVector(200,200);
    this.steering = createVector();
    this.accel = createVector();
  }

  seek(other){
    this.desired.set(p5.Vector.sub(other, this.pos));
    this.desired.setMag(this.maxspeed);
    this.steering.set(p5.Vector.sub(this.desired, this.velocity));
    this.steering.setMag(this.maxforce);
    this.applyF(this.steering);
  }
  
  flee(other){
    this.desired.set(p5.Vector.sub(other, this.pos));
    this.desired.setMag(this.maxspeed);
    this.steering.set(p5.Vector.sub(this.desired, this.velocity));
    this.steering.setMag(this.maxforce);
    this.applyF(-this.steering);
  }
  
  applyF(v){
    this.accel.set(v);
  }
  
  update(){
    this.velocity.add(this.accel);
    this.pos.add(this.velocity);
  }
  
  render(){
    circle(this.pos.x, this.pos.y, 7);
  }
  
  boundary(){
    if(this.pos.x < -15){
      this.pos.x = width+10;
    }
    else if(this.pos.x > width+15){
      this.pos.x = -10;
    }
    else if(this.pos.y < -15){
      this.pos.y = height+10;
    }
    else if(this.pos.y > height+15){
      this.pos.y = -10;
    }
  }
  
}

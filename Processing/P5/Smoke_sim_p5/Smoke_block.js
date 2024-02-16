class Smoke{
  
  Smoke(x,y,angle,reach,size){
    this.pos = createVector(x,y);
    this.angle = angle;
    this.reach = reach;
    this.size = size;
    this.speed = createVector(0,0);
    let aX = reach * cos(angle);
    let aY = reach * sin(angle);
    this.accel = createVector(aX,aY);
  }
  
  show(){
    noStroke();
    //fill(255,15);
    noFill();
    image(img,this.pos.x - this.size/2,this.pos.y - this.size/2);
    img.resize(this.size,this.size);
    tint(255,15);
    rectMode(CENTER);
    rect(this.pos.x,this.pos.y,this.size);
  }
  
  update(){
    this.pos.add(this.speed);
    this.speed.add(this.accel);
    this.accel.mult(0.90);
    this.speed.mult(0.95);
  }
  
}

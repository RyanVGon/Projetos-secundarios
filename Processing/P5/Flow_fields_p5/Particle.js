class Particle{
  constructor(x = random(0,width),y = random(0,height), cor = color(random(0,255),random(0,255),random(0,255))){
   this.pos = createVector(x,y);
   this.accel = createVector(0,0);
   this.vel = createVector(0,0);
   this.cor = cor;
  }
  
  reset(x = random(0,width),y = random(0,height), cor = color(random(0,255),random(0,255),random(0,255))){
   this.pos = createVector(x,y);
   this.accel = createVector(0,0);
   this.vel = createVector(0,0);
   this.cor = cor;
  }
  
  show(){
    let angle = noise(this.pos.x/100,this.pos.y/100) * 255;
    strokeWeight(0.1);
    stroke(this.pos.x/width*255,this.pos.y/height*255,angle);
    point(this.pos.x,this.pos.y); 
  }
  
  update(timestep = 1){
    
    this.wallLoop();
    let x = this.pos.x;
    let y = this.pos.y;

    let angle = noise(x/1000,y/1000) * 360;
    this.accel.x = cos(angle) * 0.5;
    this.accel.y = sin(angle) * 0.5;
    
    this.vel.add(this.accel.div(timestep));

    this.pos.add(this.vel.div(timestep));
    
    
    
  }
  
  wallLoop(){
    let x = this.pos.x;
    let y = this.pos.y;
    
    if((x > width) || (x < 0)){
      let wallSpawn = floor(random(0,2)) * width;
      this.reset(wallSpawn);
    }
    
    if((y > height) || (y < 0)){
      let wallSpawn = floor(random(0,2)) * width;
      this.reset(random(0,width),wallSpawn);
    }
  }

}

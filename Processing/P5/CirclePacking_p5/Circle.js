class Circle{
  
  
  Circle(_x,_y,_r){
    this.x = _x;
    this.y = _y;
    this.r = _r;
    this.col = color(0,255,0);
    this.growing = true;
  }
  
  grow(){
    if(this.growing){
      this.r += 0.125;
      this.col = color(0,255,0);
    }
    
  }
  
  edges(){
    if(this.x + this.r >= width || this.x - this.r <= 0 || this.y + this.r >= width || this.y - this.r <= 0){
      this.growing = false;
      this.col = color(255,0,0);
    }
  }
  
  show(){
    strokeWeight(2);
    stroke(this.col);
    noFill();
    circle(this.x,this.y,this.r*2);
    
    
  }

}

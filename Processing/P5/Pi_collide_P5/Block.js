class Block {
  constructor(x, w, v, m) {
    this.x = x;
    this.y = height - w;
    this.w = w;
    this.v = v;
    this.m = m;
  }

  show() {
    rect(this.x, this.y, this.w, this.w);
  }  

  update() {
    this.x += this.v;
  }
  
  wall(wallx){
    if(this.x <= wallx){
      this.v *= -1;
      pi++;
    }
  }
  
  collide(other) {
    return !(this.x + this.w < other.x || this.x > other.x + other.w); 
  }
  
  bounce(other){
    let sumM = this.m + other.m;
    let newV = (this.m - other.m) / sumM * this.v;
    newV += 2 * other.m / sumM * other.v;
    return newV;
  }
  
  
}

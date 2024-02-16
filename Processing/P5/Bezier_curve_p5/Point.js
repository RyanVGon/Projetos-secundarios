class Point{
  constructor(x, y, origin = null, end = null){
    this.origin = origin;
    this.end = end;
    this.pos = createVector(x,y);
  }
  
  update(t,origin = null, end = null){
    if(origin != null && end != null){
      this.origin = origin;
      this.end = end;
    }
    this.pos = p5.Vector.lerp(this.origin, this.end, t);
  }
  
  show(){
    point(this.pos.x,this.pos.y);
  }
}

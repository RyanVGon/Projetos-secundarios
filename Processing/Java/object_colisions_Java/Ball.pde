class Ball{
  PVector pos;
  PVector speed;
  PVector accel;
  float radius;
  int index;
  
  Ball(PVector _pos, float _radius, int _index){
    this.pos = _pos;
    this.radius = _radius;
    this.index = _index;
  }
  
  Ball(PVector _pos, float _radius, int _index, PVector _speed, PVector _accel){
    this.pos = _pos;
    this.radius = _radius;
    this.index = _index;
    this.speed = _speed;
    this.accel = _accel;
  }
  
  void show(){
    //fill(255);
    circle(this.pos.x,this.pos.y,this.radius*2);
    //fill(0);
    //text(this.index,this.pos.x,this.pos.y);
    //textAlign(CENTER);
  }
  
  void move(PVector amount){
    this.pos.add(amount);
  }
  
  
  
}

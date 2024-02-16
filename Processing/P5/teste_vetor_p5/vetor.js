class Vetor{
  constructor(modulo = 0, angulo = 0, draw = false, point = false, origem = createVector(0,0), parent = null){
    this.modulo = modulo;
    this.origem = origem;
    this.angulo = angulo;
    this.parent = parent;
    this.extremidade = createVector(cos(this.angulo) * this.modulo + this.origem.x,sin(this.angulo) * this.modulo + this.origem.y);
    this.draw = draw;
    this.point = point;
  }
  
  show(){
    if(this.draw){
      if(this.point){
        circle(this.extremidade.x,this.extremidade.y,1);
      }else{
        line(this.origem.x,this.origem.y,this.extremidade.x,this.extremidade.y);
      }
    }
  }
  
  update(){
    if(this.parent != null){
      this.origem = createVector(this.parent.extremidade.x,this.parent.extremidade.y);
    }
    this.extremidade = createVector(cos(this.angulo) * this.modulo + this.origem.x,sin(this.angulo) * this.modulo + this.origem.y);
  }

}

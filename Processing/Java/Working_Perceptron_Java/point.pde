float f(float x){
  // y = mx + b
  return 0.3 * x + 0.2;
}



class Point{
  float x;
  float y;
  float bias = 1;
  float size;
  int label;
  
  Point(float _x, float _y){
    x = _x;
    y = _y;
  }
  
  Point(float _size){
    size = _size;
    x = random(-1,1);
    y = random(-1,1);
    float lineY = f(x);
    
    if(y > lineY){
      label = 1;
    }
    else{
      label = -1;
    }
  }
 
  void show(){
    stroke(0);
    if(label==1){
      fill(255);
    } else {
      fill(0);
    }
    
    float px = pixelX();
    float py = pixelY();
    
    circle(px,py,size);
  }
  
  float pixelX(){
    return map(x,-1,1,0,width);
  }
  
  float pixelY(){
    return map(y,-1,1,height,0);
  }
  
}

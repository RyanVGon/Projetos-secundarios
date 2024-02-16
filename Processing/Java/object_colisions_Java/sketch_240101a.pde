Ball[] balls;
Cell[][] cells;
float radius = 25;
int qtd = 200;
int colisions = 0;
int xSize, ySize;

void setup(){
  size(800,800);
  balls = new Ball[qtd];
  xSize = floor(width/(radius*2));
  ySize = floor(height/(radius*2));
  cells = new Cell[xSize][ySize];
  
  //crio todas as celulas
  for(int i=0;i<xSize;i++){
    for(int j=0;j<ySize;j++){
      cells[i][j] = new Cell(i,j);
    }
  }
  
  //crio 200 bolas
  for(int i=0;i<qtd;i++){
    float x = random(radius,width-radius);
    float y = random(radius,height-radius);
    PVector pos = new PVector(x,y);
    balls[i] = new Ball(pos, radius, i);
  }
  fill(255);
}

void draw(){
  //frameRate(1);
  background(110);
  
  //desenho todas as bolas e aplico um movimento para baixo simulando uma gravidade
  for(Ball ball : balls){
    ball.show();
    ball.pos.y += 1;
  }
  
  //atualizo as posições das bolas ate que não tenha mais colisões
  do{
    colisions = 0;
    updateCells(); //adiciono cada bola em sua celula adequada
    for(int i=1;i<xSize-1;i++){    //
      for(int j=1;j<ySize-1;j++){  //utilizo de dois for para andar por todas as celulas pegando uma lista de todas as bolas que ela e seus vizinhos contêm
        int[] neighbours = cells[i][j].getNeighbours();
        for(int a=0;a<neighbours.length-1;a++){
          for(int b=a+1;b<neighbours.length;b++){
            update(balls[neighbours[a]],balls[neighbours[b]]);
          }
        }
        
      }
    }
    
    for(int i=0;i<qtd;i++){
      bound(i);
    }
    
    //for(int i=0;i<qtd-1;i++){
    //  for(int j=i+1;j<qtd;j++){
    //    update(balls[i],balls[j]);
    //  }
    //}
    println(colisions);
  }while(colisions != 0);
  
  
  
}

void update(Ball ball1,Ball ball2){
  
  float distance = dist(ball1.pos.x,ball1.pos.y,ball2.pos.x,ball2.pos.y);
  if(distance < radius*2){
    colisions++;
    PVector dir = PVector.sub(ball1.pos,ball2.pos);
    float force = radius*2 - distance;
    force = max(force, 0.1);
    dir.normalize();
    dir.setMag(force);
    dir.div(2);
    ball1.move(dir);
    ball2.move(PVector.mult(dir,-1));
  }
}

void updateCells(){
  for(int i=0;i<xSize;i++){
    for(int j=0;j<ySize;j++){
      cells[i][j].clearIndex();
    }
  }
  
  for(int i=0;i<qtd;i++){
    int x = constrain(floor(balls[i].pos.x / (radius*2)),0,xSize-1);
    int y = constrain(floor(balls[i].pos.y / (radius*2)),0,ySize-1);
    cells[x][y].insert(i);
    
  }
}

void bound(int i){
  if(balls[i].pos.x < radius){
    balls[i].pos.x = radius;
  }else if(balls[i].pos.x > width-radius){
    balls[i].pos.x = width-radius;
  }
  
  if(balls[i].pos.y < radius){
    balls[i].pos.y = radius;
  }else if(balls[i].pos.y > height-radius){
    balls[i].pos.y = height-radius;
  }
}

void mousePressed() {
  
  balls[0].pos = new PVector(mouseX,mouseY);
  balls[1].pos = new PVector(mouseX+1,mouseY+1);
  //for(int i=0;i<qtd;i++){
  //  float x = random(radius,width-radius);
  //  float y = random(radius,height-radius);
  //  PVector pos = new PVector(x,y);
  //  balls[i] = new Ball(pos, radius, i);
  //}
}

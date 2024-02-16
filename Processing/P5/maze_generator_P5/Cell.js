class Cell {
  constructor(i, j, walls = [1,1,1,1], visited = false, exit = false) { //by default every cell has all walls, is not visited and is not the exit. if a value is given the default value is overwritten
    this.i = i;
    this.j = j;
    this.walls = walls; //[1,1,1,1] stands for top, right, bottom, left
    this.visited = visited;
    this.exit = exit;
    this.path = false;
  }

  show() {//draw the cell walls
    let x = this.i * w;
    let y = this.j * w;
    stroke(255);
    strokeWeight(1);
    if(this.walls[UP]){
      line(x    ,y    ,x + w, y    );
    }
    if(this.walls[RIGHT]){
      line(x + w,y    ,x + w, y + w);
    }
    if(this.walls[DOWN]){
      line(x + w,y + w,x    , y + w);
    }
    if(this.walls[LEFT]){
      line(x    ,y + w,x    , y    );
    }
    
    //color the cell only the following cases
    if(this.visited || this.exit || this.path){
      if(this.visited){
        fill(255,0,255,100);
      }
      if(this.path){
        fill(100,200,0,175);
      }
      if(this.exit){
        fill(0,255,0,175);
      }
      noStroke();
      rect(x,y,w);
    }
  }
  
  index(i,j){
    //console.log(i + j * cols);
    //get the cell index in the grid array based on the position(i,j)
    if(i < 0 || j < 0 || i > cols-1 || j > rows-1){
      return -1;
    }
    return i + j * cols;
  }
  
  highlight(){
    //highlight the cell
    //used to highlight a desired cell, usually the bot current position
    let x = this.i * w;
    let y = this.j * w;
    noStroke();
    fill(0,0,255,100);
    rect(x,y,w);
  }
  
  checkWalls(){
    //check for neighbors not visited yet and with no blocking walls
    let neighbors = [];
    let top    = grid[this.index(this.i,this.j-1)];
    let right  = grid[this.index(this.i+1,this.j)];
    let bottom = grid[this.index(this.i,this.j+1)];
    let left   = grid[this.index(this.i-1,this.j)];
    //check for the presence of a top neighbor cell, if the bot already visited the cell, and if there is no wall blocking the path
    if(top && !top.visited && this.walls[UP] == 0){
      neighbors.push(top);
    }
    if(right && !right.visited && this.walls[RIGHT] == 0){
      neighbors.push(right);
    }
    if(bottom && !bottom.visited && this.walls[DOWN] == 0){
      neighbors.push(bottom);
    }
    if(left && !left.visited && this.walls[LEFT] == 0){
      neighbors.push(left);
    }
    
    //if the neighbors array is not empty then return a randon neighbor, otherwise return undefined
    if(neighbors.length > 0){
      let r = floor(random(0, neighbors.length));
      return neighbors[r];
    } else {
      return undefined;
    }
    
  }
  
  
  checkNeighbors(Visit = false, chance = 10){ //returns a array containing references to the neighboring cells not visited, also has the visit variable in case the visited status matters
    let neighbors = [];
    let errChance = random(1, 100); // chance to move to a already visited cell to create more paths
    let top    = grid[this.index(this.i,this.j-1)];
    let right  = grid[this.index(this.i+1,this.j)];
    let bottom = grid[this.index(this.i,this.j+1)];
    let left   = grid[this.index(this.i-1,this.j)];
    
    if(top && (!top.visited || Visit || errChance <= chance)){
      neighbors.push(top);
    }
    if(right && (!right.visited || Visit || errChance <= chance)){
      neighbors.push(right);
    }
    if(bottom && (!bottom.visited || Visit || errChance <= chance)){
      neighbors.push(bottom);
    }
    if(left && (!left.visited || Visit || errChance <= chance)){
      neighbors.push(left);
    }
    
    if(neighbors.length > 0){
      let r = floor(random(0, neighbors.length));
      return neighbors[r];
    } else {
      return undefined;
    }
    
  }
}

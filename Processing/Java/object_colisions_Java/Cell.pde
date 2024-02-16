class Cell{
  int i, j;
  int[] index;
  int[] neighbours;
  
  Cell(int _i, int _j){
    this.i = _i;
    this.j = _j;
    this.index = new int[0];
  }
  
  void insert(int ind){
    this.index = append(this.index, ind);    
  }
  
  void clearIndex(){
    this.index = new int[0];
  }
  
  int[] getNeighbours(){
    this.neighbours = new int[0];
    for(int i=this.i-1;i<=this.i+1;i++){
      for(int j=this.j-1;j<=this.j+1;j++){
        for(int ind : cells[i][j].index){
          this.neighbours = append(this.neighbours, ind);
        }
        
        
      }
    }
    
    return this.neighbours;
  }
  
}

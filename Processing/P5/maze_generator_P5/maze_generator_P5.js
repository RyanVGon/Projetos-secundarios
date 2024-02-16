let cols, rows;
let w = 35;
let grid = [];
let stack = [];
let current;
let building = true;
let exit;

const UP = 0;
const RIGHT = 1;
const DOWN = 2
const LEFT = 3

//[1,1,1,1] stands for top = 0, right = 1, bottom = 2, left = 3

function setup() {
  //frameRate(5);
  createCanvas(800, 800);
  //calculate the maze size based on the cell size
  cols = floor(width/w);
  rows = floor(height/w);

  //create a grid and push a cell to create a map
  for (var j = 0; j < rows; j++) {
    for (var i = 0; i < cols; i++) {
      var cell = new Cell(i,j);
      grid.push(cell);
    }
  }
  //start at the top left corner
  current = grid[0];
  //define the exit as the bottom right corner and mark the cell as exit
  exit = grid[grid.length - 1];
  exit.exit = true;
}


function draw() {
  background(0);
  //show the grid
  for (let c of grid) {
    c.show();
  }
  
  //check it the maze is being built or solved
  if (building) {
    //mark the current cell as already visited and give it a highlight to mark the cell the bot is at the time
    current.visited = true;
    current.highlight();
    //check for the presence of neighbors and if there is a neighbor
    let next = current.checkNeighbors();
    if (next) {
      //move the current cell to the stack, remove the walls between the current cell and the next, visit the next cell
      next.visited = true;
      stack.push(current);
      removeWalls(current, next);
      current = next;
    } else if (stack.length > 0) {
      current = stack.pop(); //if there is no neighbor then the bot has hit a dead end and must backtrack
    }
    //if the bot back tracks to the first cell that means the bot finished the maze and is ready to solve
    if (current == grid[0]) {
      //switch to solving mode and notify the completion of the build
      building = false;
      console.log('Maze is ready!!');
      //unmark the visited cells to remove the visit hightlight
      for (let c of grid) {
        c.visited = false;
      }
    }
  } else if (current == exit) {
    //check to see if the current cell is the exit. In case it is then notify the completion of the maze and remove the visited highlight
    console.log('maze done');
    for (let c of grid) {
      c.visited = false;
    }
    //then highlight every cell in the stack to show the path from the beginning to the end
    for (let c of stack) {
      c.path = true;
      background(0);
      for (let c of grid) {
        c.show();
      }
    }
    
      
    //stop the program
    noLoop();
  } else {
    //in case the bot has not found the exit then move to the next neighbor that has no wall blocking the move
    current.visited = true;
    current.highlight();
    let next = current.checkWalls(); //checks if there is a neighbor with no blocking wall. in case there is then return a randon neighbor, if false return undefined
    if (next) {
      next.visited = true;
      stack.push(current);
      current = next;
    } else if (stack.length > 0) {
      //if there is no neighbor then the bot has hit a dead end and must backtrack until it hits the starting point
      current = stack.pop();
    }
    if (current == grid[0]) {
      //if there bot backtracks to the start this means there is no solution
      building = false;
      console.log('No Solution found');
      for (let c of grid) {
        c.visited = false;
      }
      noLoop();
    }
  }
}




function removeWalls(a, b) {
  let x = a.i - b.i;
  if (x === 1) {
    a.walls[LEFT] = false;
    b.walls[RIGHT] = false;
  } else if (x === -1) {
    a.walls[RIGHT] = false;
    b.walls[LEFT] = false;
  }

  let y = a.j - b.j;
  if (y === 1) {
    a.walls[UP] = false;
    b.walls[DOWN] = false;
  } else if (y === -1) {
    a.walls[DOWN] = false;
    b.walls[UP] = false;
  }
}

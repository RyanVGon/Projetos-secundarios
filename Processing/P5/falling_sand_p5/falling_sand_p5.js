let grid;
let nextgrid;
let w = 4;
let cols, rows;
let hue = 0;


function setup() {
  createCanvas(800, 800);
  cols = width / w;
  rows = height / w;

  grid = new2DArray(cols, rows);


  grid = arraySet(0, grid, cols, rows);

  noStroke();
  colorMode(HSB);
}


function draw() {
  background(0);

  nextgrid = new2DArray(cols, rows);
  nextgrid = arraySet(0, nextgrid, cols, rows);
  if (mouseIsPressed) {
    mouseDragged();
  }

  for (i=0; i<cols; i++) {
    for (j=0; j<rows; j++) {


      if (grid[i][j] != 0) {
        let x = i * w;
        let y = j * w;
        fill(grid[i][j]*255, 255, 255);
        rect(x, y, w);
        fall(i, j);
      }
    }
  }

  grid = nextgrid;
}

function mouseDragged() {
  let col = floor(mouseX / w);
  let row = floor(mouseY / w);
  col = constrain(col, 0, cols-1);
  row = constrain(row, 0, rows-1);

  for (i=0; i<7; i++) {
    for (j=0; j<7; j++) {

      let x = col - 3 + i;
      let y = row - 3 + j;
      if (x >= 0 && x < cols && y >= 0 && x < rows) {

        let chance = random(0, 1);

        if (chance > 0.75) {
          if (grid[x][y] == 0) {
            grid[x][y] = hue;
            hue+=0.00005;
            if (hue >= 1.01) {
              hue = 0;
            }
          }
        }
        
      }
      
    }
  }
  
  
}

function fall(x, y) {
  let underY = constrain((y+1), 0, rows-1);
  let under = grid[x][underY];

  if (y != rows-1) {
    if (under == 0) {
      nextgrid[x][underY] = grid[x][y];
    } else {
      let leftX = constrain(x-1, 0, cols-1);
      let rightX = constrain(x+1, 0, cols-1);
      let leftNeigh = grid[leftX][underY];
      let rightNeigh = grid[rightX][underY];
      if (leftNeigh == 0) {
        nextgrid[leftX][underY] = grid[x][y];
      } else if (rightNeigh == 0) {
        nextgrid[rightX][underY] = grid[x][y];
      } else {
        nextgrid[x][y] = grid[x][y];
      }
    }
  } else {
    nextgrid[x][y] = grid[x][y];
  }
}

function new2DArray(cols, rows) {
  let array = new Array(cols);
  for (i=0; i<rows; i++) {
    array[i] = new Array(rows);
  }
  return array;
}

function arraySet(value, array, iSize, jSize) {
  for (i=0; i<iSize; i++) {
    for (j=0; j<jSize; j++) {
      array[i][j] = value;
    }
  }
  return array
}

let grid;
let slider;
let button;
let button2;
let paused = 0;
let next;
let cols;
let rows;
let lastmouse;
let resolution = 4;

function setup() {
  createCanvas(800, 800);
  
  slider = createSlider(1,100,10,1);
  button = createButton("Randomizar");
  button2 = createButton("Limpar");
  button.mousePressed(rand);
  button2.mousePressed(limpar);
  
  cols = width/resolution;
  rows = height/resolution;
  grid = make2DArray(cols, rows);
  next = make2DArray(cols, rows);
  

  background(0);
  rand();
  render();
}

function draw() {
  background(0);
  frameRate(slider.value());
  render();
  let next = make2DArray(cols, rows);
  
  if (paused) {
    //fill(0,255,0);
    //rect(150,125,25,150);
    //rect(200,125,25,150);
  } else {
    for (var i = 0; i < cols; i++) {
      for (var j = 0; j < rows; j++) {
        var qtd = count(grid, i, j);
        //console.log(qtd);

        //caso estiver vivo
        if (grid[i][j]) {
          //menos que 2 morre
          if (qtd < 2) {
            next[i][j] = 0;
          }
          //mais que 3 morre
          else if (qtd > 3) {
            next[i][j] = 0;
          }
          //entre 2 e 3 vive
          else {
            next[i][j] = 1;
          }
        }
        //caso estiver morto
        else {
          //se tiver exatamente 3 reproduz
          if (qtd == 3) {
            next[i][j] = 1;
          } else {
            next[i][j] = 0;
          }
        }
      }
    }
    //console.log(next);
    grid = next;
  }
}



function mouseClicked() {
  let posx = floor(mouseX / resolution);
  let posy = floor(mouseY / resolution);
  if (grid[posx][posy]) {
    grid[posx][posy] = 0;
  } else {
    grid[posx][posy] = 1;
  }
}

function keyPressed() {
  if (keyCode == 32) {
    if(paused){
      paused = 0;
    }
    else{
      paused = 1;
    }
  }
}


function make2DArray(cols, rows) {
  let arr = new Array(cols);
  for (let i = 0; i < arr.length; i++) {
    arr[i] = new Array(rows);
  }
  return arr;
}

function count(_grid, x, y) {
  let x2 = x*resolution;
  let y2 = y*resolution;
  let neigh = [];
  let qtd = 0;
  let i = 0;
  let j = 0;
  let xy;

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      xy = {
      x: 
      x+i-1, 
      y: 
      y+j-1
    };
    if (xy.x >= 0 && xy.x <= cols-1 && xy.y >= 0 && xy.y <= rows-1 && (xy.x != x || xy.y != y)) {
      neigh.push(xy);
      qtd += _grid[xy.x][xy.y];
    }
  }
}
//console.log(neigh); 
//fill(50, 255, 0);
//textSize(50);
//text(qtd, x2, y2, x2+resolution, xy+resolution);
return qtd;


}

function rand(){
  for (let i = 0; i < cols; i++) {
    for (let j = 0; j < rows; j++) {
      grid[i][j] = floor(random(2));
    }
  }
}

function limpar(){
  for (let i = 0; i < cols; i++) {
    for (let j = 0; j < rows; j++) {
      grid[i][j] = 0;
    }
  }
}
  
function render() {
  for (let i = 0; i < cols; i++) {
    for (let j = 0; j < rows; j++) {
      let x = i*resolution;
      let y = j*resolution;
      if (grid[i][j]) {
        fill(255);
      } else {
        fill(0);
      }
      rect(x, y, resolution-1, resolution-1);
    }
  }
}

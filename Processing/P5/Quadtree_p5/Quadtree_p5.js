let qt;

function setup() {
  createCanvas(600, 600);
  background(0);
  let boundary = new Rectangle(width/2, height/2, width/2, height/2);
  qt = new Quadtree(boundary, 1);
  //console.log(qt);

  for(let i = 0; i < 200; i++){
    let x = randomGaussian(width/2, width/8);
    let y = randomGaussian(height/2, height/8);
    p = new Point(x,y);
    qt.insert(p);
  }
  qt.show();
  stroke(0,255,0);
  rectMode(CENTER);
  let range = new Rectangle(250,250,107, 75);
  //rect(range.x, range.y, range.w*2, range.h*2);
  let points = [];
  qt.query(range, points);
  console.log(points);
}


function draw() {
  //background(0);
  //qt.show();
  //if (mouseIsPressed) {
  //  for (let i = 0; i < 4; i++) {
  //    p = new Point(mouseX, mouseY);
  //    qt.insert(p);
  //  }
  //}
}

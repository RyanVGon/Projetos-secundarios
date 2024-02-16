var worldy;
var block1;
var block2;
var pi = 0;
var digits = 7;
let pidiv;
const timeSteps = 1000000;

function setup() {
  createCanvas(600, 300);
  background(0);
  stroke(200);
  fill(200);
  pidiv = createDiv(pi);
  pidiv.style('font-size', '72pt');
  //                  x,w,v,m
  block1 = new Block(50, 20, 0, 1);
  const m2 = pow(100, digits-1);
  block2 = new Block(150, 100, -1/timeSteps, m2);
}


function draw() {
  pidiv.html(nf(pi, digits));
  background(0);
  for (let i = 0; i < timeSteps; i++) {
    block1.update();
    block2.update();
    if (block1.collide(block2)) {
      const v1 = block1.bounce(block2);
      const v2 = block2.bounce(block1);
      block1.v = v1;
      block2.v = v2;
      pi++;
    }
    block1.wall(0);
  }
  block1.show();
  block2.show();
}

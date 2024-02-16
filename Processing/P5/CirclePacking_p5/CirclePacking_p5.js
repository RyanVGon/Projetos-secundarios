let circles = [];
let img;

function setup() {
  //frameRate(5);
  createCanvas(800, 800);
  while (circles.length < 5) {
    let radius = 1;
    let cirx = random(radius, width-radius);
    let ciry = random(radius, height-radius);
    newcir(cirx, ciry, radius);
  }
  cor = color(255,0,0);
}
function mousePressed() {
  newcir(mouseX, mouseY);
}


function draw() {
  background(0);
  if(floor(random(1,100)) % 10 == 1){
    let initial = circles.length + 10;
    while(initial > circles.length) {
      let radius = 5;
      let cirx = random(radius, width-radius);
      let ciry = random(radius, height-radius);
      newcir(cirx, ciry, radius);
    }
  }
  for (let i = 0; i < circles.length; i++) {
    circles[i].show();
    //circles[i].grow();


    if (circles[i].growing) {
      circles[i].edges();

      for (let j = 0; j < circles.length; j++) {
        distance = dist(circles[i].x, circles[i].y, circles[j].x, circles[j].y);

        if ((distance <= (circles[i].r + circles[j].r) + 4) && i != j) {
          circles[i].growing = false;
          circles[i].col = color(255,0,0);
        }
      }
    }

    circles[i].grow();
  }
}




function newcir(_x, _y, _r = 5) {
  let valid = true;
  let radius = _r;
  let cirx = _x;
  let ciry = _y;
  if (circles.length > 0) { 
    for (let i = 0; i < circles.length; i++) {
      let distance = circles[i].r + radius;
      if (distance > dist(circles[i].x, circles[i].y, cirx, ciry)) {
        valid = false;
        break;
      }
    }
    if (valid) {
      circles.push(new Circle());
      circles[circles.length-1].Circle(cirx, ciry, radius);
    }
  } else {
    circles.push(new Circle());
    circles[circles.length-1].Circle(cirx, ciry, radius);
  }
}

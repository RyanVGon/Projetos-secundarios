let car;
let runner;
let mouse;

function setup() {
  createCanvas(400,400);
  //car = new Vehicle(5,0.3);
  runner = new Vehicle(5,0.3, 150, 312);
  mouse = createVector();
}


function draw() {
  background(0);
  mouse.set(mouseX, mouseY);
  //let Cforce = car.seek(runner.pos);
  //let Rforce = runner.flee(car.pos);
  let Rforce = runner.seek(mouse);
  
  //car.applyF(Cforce);
  runner.update(Rforce);
  
  runner.render();
  runner.boundary();
  //car.render();
  //car.boundary();
}

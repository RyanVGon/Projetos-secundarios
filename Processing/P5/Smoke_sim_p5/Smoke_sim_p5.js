let p = [];
let img;
function setup() {
  createCanvas(800,800);
  for(let i = 0; i < 100; i++){
    p.push(new Smoke());
    p[i].Smoke(400,400,random(0,TWO_PI),random(0.5,1.5),random(100,160));
  }
  
}

function preload(){
  img = loadImage('texture.png');
  tint(255,1);
}


function draw() {
  background(0);
  for(let s of p){
    s.show();
    s.update();
  }
}

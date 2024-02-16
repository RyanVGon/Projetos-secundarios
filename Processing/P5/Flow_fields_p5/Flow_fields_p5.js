Xsize = 10;
Ysize = 10;
particulas = [];
timestep = 2;
  
function setup() {
  createCanvas(2000,2000);
  
  //noStroke();
  stroke(255);
  angleMode(DEGREES);
  
  for(var i=0;i<1500;i++){
    particulas[i] = new Particle();
  }
 
  
  background(255);
}


function draw() {
  for(ponto of particulas){
    for(var i=0;i<timestep;i++){
      ponto.show();
      ponto.update(timestep);
    }
  }

}

let vetor1, vetor2, vetor3;
let cShow1, cShow2, cShow3;
let cPoint1, cPoint2, cPoint3;

function setup() {
  createCanvas(600,600);
  background(0);
  vetor1 = new Vetor(30,PI*1.5);
  vetor2 = new Vetor(30,PI*1.5,0,0,vetor1.extremidade,vetor1);
  vetor3 = new Vetor(30,PI*1.5,1,1,vetor2.extremidade,vetor2);
  
  cShow1 = createCheckbox('Show 1', false);
  cShow2 = createCheckbox('Show 2', false);
  cShow3 = createCheckbox('Show 3', false);
  
  cPoint1 = createCheckbox('Point 1', false);
  cPoint2 = createCheckbox('Point 2', false);
  cPoint3 = createCheckbox('Point 3', false);
  
}


function draw() {
  vetor1.draw = cShow1.checked();
  vetor2.draw = cShow2.checked();
  vetor3.draw = cShow3.checked();
  
  vetor1.point = cPoint1.checked();
  vetor2.point = cPoint2.checked();
  vetor3.point = cPoint3.checked();
  translate(width/2,height/2);
  
  strokeWeight(1);
  
  for(let i = 0;i < 100;i++){
    vetor1.update();
    vetor1.angulo-=0.03;
    
    vetor2.update();
    vetor2.angulo-=0.06;
    
    vetor3.update();
    vetor3.angulo+=0.09;
    
    
    stroke(255,0,0);
    vetor1.show();
    stroke(0,0,255);
    vetor2.show();
    stroke(0,255,0); 
    vetor3.show();
  }
  
  
}

function flipDraw(vetor){
    vetor.draw*=-1;  
}

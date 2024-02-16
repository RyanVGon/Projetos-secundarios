Perceptron neuron;
Point[] points = new Point[3000];
int trainingIndex = 0;

void setup(){
  size(500,500);
  frameRate(20);
  neuron = new Perceptron(2);
  for(int i = 0; i < points.length; i++){
    points[i] = new Point(8);
  }
}

void draw(){
  background(255);
  stroke(0);
  Point p1 = new Point(1, f(1));
  Point p2 = new Point(-1, f(-1));
  
  Point g1 = new Point(-1, neuron.guessY(-1));
  Point g2 = new Point(1, neuron.guessY(1));
  
  line(g1.pixelX(),g1.pixelY(),g2.pixelX(),g2.pixelY());
  line(p1.pixelX(),p1.pixelY(),p2.pixelX(),p2.pixelY());
  for(Point pt : points){
    pt.show();
    
    float[] inputs = {pt.x,pt.y,pt.bias};
    int target = pt.label;
    neuron.train(inputs, target);
    
    int guess = neuron.guess(inputs);
    if (guess == pt.label){
      fill(0,255,0);
    } else {
      fill(255,0,0);
    }
    noStroke();
    circle(pt.pixelX(),pt.pixelY(),pt.size/2);
  }
  
  Point training = points[trainingIndex];
  float[] inputs = {training.x,training.y,training.bias};
  int target = training.label;
  neuron.train(inputs, target);
  trainingIndex++;
  if (trainingIndex == points.length){
    trainingIndex = 0;
  }
  
  
}

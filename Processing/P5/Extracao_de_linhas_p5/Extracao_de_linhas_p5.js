function preload(){
  img = loadImage("images.jpg");
}

var xedge = [3];
var xdg;
var ydg;
var yedge = [3];

function setup() {
  createCanvas(img.width,img.height);
  image(img,0,0);
  
  for(let i = 0; i < 3; i++){
    xedge[i] = [3];
    yedge[i] = [3];
  }
  
  edgeDetect();
  updatePixels();
}


function draw() {
  
}


edgeDetect = function(){
  for(var x = 1; x < width-1; x++){
    for(var y = 1; y < height-1; y++){
      
      xdg += get(x-1,y-1)[0] * -1; 
      xdg += get(x+1,y+1)[0];
      xdg += get(x-1,y)[0] * -2; 
      xdg += get(x+1,y)[0] * 2; 
      xdg += get(x-1,y-1)[0] * -1;
      xdg += get(x+1,y-1)[0];
      
      ydg += get(x-1,y+1)[0] * -1;
      ydg += get(x,y+1)[0] * -2;
      ydg += get(x+1,y+1)[0] * -1;
      ydg += get(x-1,y-1)[0];
      ydg += get(x,y-1)[0] * 2;
      ydg += get(x+1,y-1)[0];
      
      var xydg = sqrt(xdg*xdg + ydg*ydg);
      
      set(x,y,xydg);
      xydg = 0;
      xdg = 0;
      ydg = 0;
    }
  }
}



peb = function(){
  for(var x = 0; x < width; x++){
    for(var y = 0; y < height; y++){
      var c = get(x,y);
      var r = c[0];
      var g = c[1];
      var b = c[2];
      var gray = (r * 0.3 + g * 0.59 + b * 0.11);
      gray = color(gray,gray,gray);
      set(x,y,gray);
    }
  }
  updatePixels();
};

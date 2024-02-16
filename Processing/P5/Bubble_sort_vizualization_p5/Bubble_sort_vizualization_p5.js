let list = [];
let Clist = [];
let Canvas_size = 1000;

function setup() {
  createCanvas(Canvas_size, Canvas_size)
  for (let i = 0; i < width; i++) {
    list.push(i)
  }
  Clist = shuffle(list);
}

function draw() {
  strokeWeight(1);
  background(0);
  for (let n = 0; n < Clist.length; n++) {
    if(Clist[n] == list[n]){
      stroke(0,255,0);
    }
    else{
      stroke(255,0,0);
    }
    line(n, height, n, height-Clist[n]);
  }
  for (let i = 0; i < Clist.length-1; i++) {
    let x = i
      do {
      if (Clist[i] > Clist[i+1]) {
        let temp = Clist[i];
        Clist[i] = Clist[i+1];
        Clist[i+1] = temp;
      }
      i++;
      if (i == Clist.length-1) {
        i = 0;
      }
    } while (Clist[x] > Clist[x+1]);
  }
  if(JSON.stringify(Clist) === JSON.stringify(list)){
    Clist = shuffle(list);
  }
}

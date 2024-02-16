var size = 400;
var array = [];
var rand = [];

function setup() {
  //coloca valores na array
  for (i = 0; i < size; i++) {
    array[i] = i+1;
    rand[i] = i+1;
  }

  console.log("Array inicial: " + array);

  //aleatoriza a array
  for (i = 0; i < size*2; i++) {
    var a = round(random(rand.length - 1));
    var b = round(random(rand.length - 1));
    //console.log("A: " + a + ", B: " + b);
    swap(rand, a, b);
  }
  console.log("Array aleatoria: " + rand);

   for(x = 0; x < rand.length; x++){
     for(i = 0; i < rand.length - 1; i++){
       var j = i+1;
       if(rand[i] > rand[j]){
        swap(rand, i, j);
       }
     }
   }
    
    
  
  
  
  console.log(frames);


  console.log("Organizada: " + rand);
}


function draw() {
}

//troca dois valores de uma array
function swap(arr, i, j) {
  temp = arr[i];
  //console.log("Array 1 antes: " + arr[i]);
  //console.log("Array 2 antes: " + arr[j]);
  arr[i] = arr[j];
  arr[j] = temp;
  //console.log("Array 1 depois: " + arr[i]);
  //console.log("Array 2 depois: " + arr[j]);
}

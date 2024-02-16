int[] numeros = {1,2};
boolean primo = true;
int numeroMaximo = 1000000;
PrintWriter output = createWriter("numeros_primos.txt"); 

for(int i = 3;i < numeroMaximo;i+=2){
  primo = true;
  for(int j = 1;j < numeros.length-1;j++){
    if(i % numeros[j] == 0){
      primo = false;
      break;
    }
  }
  if(primo){
    numeros = append(numeros, i);
  }
  
}
for(int num : numeros){
  output.println(num);
}
//output.println(numeros);
output.close();
exit();
println("terminado");

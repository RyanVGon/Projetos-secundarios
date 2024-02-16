function setup() { 
    // Driver code
    let text = "teste-";
    let s = 12;
    let crypt = encrypt(text, s);
    console.log(crypt);
}


function draw() {

}

function encrypt(text, s)
    {
        let result="";
        for (let i = 0; i < text.length; i++)
        {
            let char = text[i].charCodeAt(0);
            if (char >= 65 && char <= 90)
            {
                let ch =  String.fromCharCode((char + s - 65) % 26 + 65);
                result += ch;
            }
            else if (char >= 97 && char <= 122)
            {
                let ch = String.fromCharCode((char + s - 97) % 26 + 97);
                result += ch;
            }
            else{
                result += text[i];
            }
        }
        return result;
    }
    
   
function decrypt(text){
  let result;
  for (let i = 0; i < 26; i++){
    result="";
    let chcode;
    for (let j = 0; j < text.length; j++){
      let char = text[j].charCodeAt(0);
      if (char >= 65 && char <= 90){
        chcode = (char - i - 65) % 26 + 65;
        let ch =  String.fromCharCode(chcode);
        result += ch;
      }
      else if (char >= 97 && char <= 122){
        chcode = (char - i - 97) % 26 + 97;
        let ch = String.fromCharCode(chcode);
        result += ch;
      }
      else{
        result += text[j];
      }
      if(!(chcode >= 65 && chcode <= 90 || chcode >= 97 && chcode <= 122)){
        result = false;
        break;
      }
      
    }
    if(result){
      result = encrypt(result, i);
      result += ", and the right shift is " + i;
      return result;
    }
  }
}

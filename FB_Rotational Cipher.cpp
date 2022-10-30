string rotationalCipher(string input, int rotationFactor) {
  /*loop over string.
  every char into int. (defining the range to know the un-char)
  +3 to the int 
  return back to a char 
  
  edge cases: say z + 3 if out > z --> out - z + a
  
  captial: 65 -- 90
  smal:    75 -- 122
  */
  
  if (input.size() == 0)
    return "";
  
  int out = 0; 
  for(int i = 0; i < input.size(); i++){
    
    //chaking if number:
    if(isdigit(input[i])){
      //cout << "iam digit" << endl;
      
      out = input[i] + rotationFactor - 48; //new num as int
      //cout << "string before add: " << input[i] << " its num: " << (int)input[i] <<  "  out before while: " << out << endl;
      while (out > 9){
        out -= 10;
      } 
      //cout << input[i] << endl;
      input[i] = (char)(out + 48);
      //cout << input[i] << endl;
    }  

    //chaking if number:
    //if(int(input[i]) >= 0 && int(input[i]) <=9){
    //  out = int(input[i]) + rotationFactor; //new num as int
    //  while(out > 9){
    //    out = out - 9 + 0; //the new num
    //    input[i] = char(out); 
    //    //continue; 
    //  }
    //}

    
    //chaking if upper case: 
    else if(int(input[i]) >= int('A') && int(input[i]) <= int('Z')){
      out = int(input[i]) + rotationFactor; //new num as int
      while (out > int('Z')){
        out = out - int('Z') + int('A') - 1; //the new num 
      }
      input[i] = char(out);
    }
    
    //chaking if small case: 
    else if(int(input[i]) >= int('a') && int(input[i]) <= int('z')){
      out = int(input[i]) + rotationFactor; //new num as int
      while (out > int('z')){
        out = out - int('z') + int('a') - 1; //the new num 
      }
      input[i] = char(out);
    }
  }
    return input;
}


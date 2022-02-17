int i;
int x = 0;
int y = 0;
int secPins[10] = {2,3,4,5,6,7,8,9,10,11};  // array to store the second pins
int decPins[6] = {A5, A4, A3, A2, A1, A0};  // array to store the ten second pins

void setup() {
  for (i=0; i<10; i++){
    pinMode (secPins[i], OUTPUT);
  }
  for (i=0; i<6; i++){
    pinMode (decPins[i], OUTPUT);
  }
}

void loop () {
  // turn the lights on in sequence  
  for (i=0; i<10; i++){
    // turn on second lights
    digitalWrite (secPins[i], LOW);
  }  
   
  for (i=0; i<10; i++){   
    digitalWrite (secPins[i], HIGH);
    delay (1000);
  }
  
  digitalWrite (decPins[x], HIGH);
  x++; 
  
  if (x > 5) {
    // clear all of the LEDs if the cycle is over
    x = 0;
    i = 1;
    for (i=0; i<10; i++){
      digitalWrite (secPins[i], LOW);
    }
    
    for (i=0; i<6; i++){
      digitalWrite (decPins[i], LOW);
    }
  }
}

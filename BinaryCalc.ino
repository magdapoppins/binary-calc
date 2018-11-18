
int ledPins[] = {2, 3, 4, 5, 6, 7, 8, 9};

// TODO: Use enums to represent math operations
/*
enum mathOperations {
  addition,
  subtraction,
  multiplication,
  division
};
*/

void setup() {
  int index;
  for(index = 0; index <= 7; index++){
    pinMode(ledPins[index], OUTPUT);
  }

}

void loop() {
  // allTheLightsLoop();
  // Calculate 45 - 3
   calculateBinary(45, 3, 2);
}

void calculateBinary(int a, int b, int option){
  switch (option){
    case 1:
      intToLeds(a + b);
      break; 
    case 2:
      intToLeds(a - b);
      break;
    case 3:
      intToLeds(a * b);
      break; 
    case 4:
      intToLeds(a / b);
      break;       
    default:
      break;
  }
}

// ledPins[0] - 2^0 = 1
// ledPins[1] - 2^1 = 2
// ledPins[2] - 2^2 = 4
// ledPins[3] - 2^3 = 8
// ledPins[4] - 2^4 = 16
// ledPins[5] - 2^5 = 32
// ledPins[6] - 2^6 = 64
// ledPins[7] - 2^7 = 128

void intToLeds(int resultInInts){
  if (resultInInts/128 == 1){
    digitalWrite(ledPins[7], HIGH);
    resultInInts -= 128;
  }
  if (resultInInts/64 == 1){
    digitalWrite(ledPins[6], HIGH);
    resultInInts -= 64;
  }
  if (resultInInts/32 == 1){
    digitalWrite(ledPins[5], HIGH);
    resultInInts -= 32;
  }
  if (resultInInts/16 == 1){
    digitalWrite(ledPins[4], HIGH);
    resultInInts -= 16;
  }
  if (resultInInts/8 == 1){
    digitalWrite(ledPins[3], HIGH);
    resultInInts -= 8;
  }
  if (resultInInts/4 == 1){
    digitalWrite(ledPins[2], HIGH);
    resultInInts -= 4;
  }
    if (resultInInts/2 == 1){
    digitalWrite(ledPins[1], HIGH);
    resultInInts -= 2;
  }
    if (resultInInts/1 == 1){
    digitalWrite(ledPins[0], HIGH);
    resultInInts -= 1;
  }

  delay(1000);
}

void allTheLightsLoop(){
  int delayTime = 100;

  digitalWrite(ledPins[0], HIGH);
  delay(delayTime);
  digitalWrite(ledPins[0], LOW);
  delay(delayTime);
  digitalWrite(ledPins[1], HIGH);
  delay(delayTime);
  digitalWrite(ledPins[1], LOW);  
  delay(delayTime);
  digitalWrite(ledPins[2], HIGH);
  delay(delayTime); 
  digitalWrite(ledPins[2], LOW);
  delay(delayTime); 
  digitalWrite(ledPins[3], HIGH);
  delay(delayTime);
  digitalWrite(ledPins[3], LOW);
  delay(delayTime);
  digitalWrite(ledPins[4], HIGH);
  delay(delayTime);
  digitalWrite(ledPins[4], LOW);
  delay(delayTime);  
  digitalWrite(ledPins[5], HIGH);
  delay(delayTime);
  digitalWrite(ledPins[5], LOW);
  delay(delayTime);  
  digitalWrite(ledPins[6], HIGH);
  delay(delayTime);
  digitalWrite(ledPins[6], LOW);
  delay(delayTime);
  digitalWrite(ledPins[7], HIGH);
  delay(delayTime);
  digitalWrite(ledPins[7], LOW);
  delay(delayTime);  
}

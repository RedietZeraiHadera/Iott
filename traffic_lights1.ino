//TRAFFIC LIGHT 1
//red is connected 11
int red1 = 11;
//yellow is connected to 12
int yellow1 = 12;
//green is connected to 13
int green1 = 13;
// traffic light 2
//red2 connected to 8
int red2 = 8;
//yellow2 connected to 9
int yellow2 = 9;
// green2 connected to 10
int green2 = 10;

void setup (){
  //light1 shows that these are the output
  //outputs red light
  pinMode (red1, OUTPUT);
  //output yellow light
  pinMode (yellow1, OUTPUT);
  //output is green light
  pinMode (green1, OUTPUT);
   //light2 the outputs on the other side
  pinMode (red2, OUTPUT);
  //the second red light is the otput
  pinMode (yellow2, OUTPUT);
  //the second yelloe light is the output
  pinMode (green2, OUTPUT);
  //the second green light is the output
}
void loop () {
  //this orders t to continually repeat until disconnected from arduino
  changeLights ();
  // this is a code to chane lights
  delay(10000);
  // delays for 10 sec
}
  void changeLights () {
    //both yellow turns on
    digitalWrite(green1, LOW);
    //makes both the yellow glow
    digitalWrite(yellow1, HIGH);
    digitalWrite(yellow2, HIGH);
    delay(7000);
   
    //TURNS OFF YELLOW AND 
    digitalWrite(yellow1, LOW);
    //turns on red light
    digitalWrite(red1, HIGH);
    // turns off the yellow
    digitalWrite(yellow2, LOW);
    // turns off the red
     digitalWrite(red2, LOW);
    // turns on green
    digitalWrite(green2, HIGH);
    delay(7000);
      //both of the yellow lights turns on
        digitalWrite(yellow1, HIGH);
    digitalWrite(yellow2, HIGH);
    // green is off
    digitalWrite(green2, LOW);
    delay(3000);
       //turns off both yellow light and turns on green1 and red2
      digitalWrite(green1, HIGH);
    digitalWrite(yellow1, LOW);
    // turn off red
    digitalWrite(red1, LOW);
    // turns off yellow
     digitalWrite(yellow2, LOW);
    //turn on red
    digitalWrite(red2, HIGH);
    //delays for 7 seconds
    delay(7000);
  }

  

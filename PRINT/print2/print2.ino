/**********************************************************************************
**                                                                               **
**                          PLANTILLA CFGS                                       **
**                                                                               **
**     GORKA FERNÁNDEZ RAMOS                                       22/01/2017    **
**********************************************************************************/

//******************************* INCLUDES ****************************************

//******************************* VARIABLES ***************************************
  int thisByte = 33;
//******************************** SETUP ******************************************
  void setup()
  {
  Serial.begin(9600);    // set up Serial library at 9600 bps

  Serial.println("Different formats for the same number:");
  }

//********************************* LOOP ******************************************
  void loop()
  {
  Serial.write(thisByte); 
  Serial.print(", dec: "); 
  Serial.print(thisByte);      
  Serial.print(", hex: "); 
  Serial.print(thisByte, HEX);     
  Serial.print(", oct: "); 
  Serial.print(thisByte, OCT);     
  Serial.print(", bin: "); 
  Serial.println(thisByte, BIN);   

  if(thisByte == 126)  // if printed last visible character '~'
  { 
    while(true)
    { 
    } 
  } 
  thisByte++;     // go on to the next characte
  }

//******************************* FUNCIONS ****************************************

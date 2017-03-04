/**********************************************************************************
**                                                                               **
**                               PRINT 2                                         **
**                                                                               **
**     GORKA FERNÁNDEZ RAMOS                                       13/02/2017    **
**********************************************************************************/

//******************************* INCLUDES ****************************************

//******************************* VARIABLES ***************************************
  int thisByte = 33; // VALOR DE LES VARIABES 
//******************************** SETUP ******************************************
  void setup() // NOMÉS EXECUTA UN COP
  {
  Serial.begin(9600);    // ARRANCA A 9600 bps

  Serial.println("Different formats for the same number:");
  }

//********************************* LOOP ******************************************
  void loop() // REPETIDAMENT 
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

  if(thisByte == 126)  // SI EL CALOR DE THISBYTE ES IGUAL A 126
  { 
    while(true)   // MENTRES SIGUI CERT ANIRA REPETINT EL CILCE
    { 
    } 
  } 
  thisByte++;     // SUMA 1 A " THISBYTE "
  }

//******************************* FUNCIONS ****************************************

/**********************************************************************************
**                                                                               **
**                                  PRINT 1                                      **
**                                                                               **
**     GORKA FERNÁNDEZ RAMOS                                       13/02/2017    **
**********************************************************************************/

//******************************* INCLUDES ****************************************

//******************************* VARIABLES ***************************************
int num = 64; // VALOR DE LA VARIABLE 
//******************************** SETUP ******************************************
void setup() // NOMÉS UN COP 
  {
  Serial.begin(9600);    // ARRANCA A 9600 bps

  Serial.println("Different formats for the same number:"); // IMPRIMEIX AIXÒ EN UNA LINEA 

  Serial.write(num);
  Serial.println();
  
  
  Serial.println(num);
  Serial.println(num,DEC); // ESCRIU EL VALOR DE NUM EN DEC 
  
  Serial.println(num,BIN); // ESCRIU EL VALOR DE NUM EN BIN 
  
  Serial.println(num,HEX); // ...
  
  Serial.println(num,OCT); // ...

  }

//********************************* LOOP ******************************************
void loop()
{
}

//******************************* FUNCIONS ****************************************

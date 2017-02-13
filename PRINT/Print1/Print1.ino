/**********************************************************************************
**                                                                               **
**                          PLANTILLA CFGS                                       **
**                                                                               **
**     GORKA FERNÁNDEZ RAMOS                                       22/01/2017    **
**********************************************************************************/

//******************************* INCLUDES ****************************************

//******************************* VARIABLES ***************************************
int num = 64;
//******************************** SETUP ******************************************
void setup()
  {
  Serial.begin(9600);    // set up Serial library at 9600 bps

  Serial.println("Different formats for the same number:");

  Serial.write(num);
  Serial.println();
  
  
  Serial.println(num,DEC);
  
  Serial.println(num,BIN);
  
  Serial.println(num,HEX);
  
  Serial.println(num,OCT);

  }

//********************************* LOOP ******************************************
void loop()
{
}

//******************************* FUNCIONS ****************************************

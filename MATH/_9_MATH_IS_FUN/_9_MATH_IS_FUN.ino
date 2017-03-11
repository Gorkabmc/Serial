/**********************************************************************************
**                                                                               **
**                          MATH IS FUN 9                                        **
**                                                                               **
** GORKA FERNÁNDEZ RAMOS                                       6/02/2017         **
**********************************************************************************/

//******************************* INCLUDES ****************************************

//******************************* VARIABLES ***************************************
  float a = 3;
  float b = 2;
  float d;     // VALORS DE VARIABLES 
//******************************** SETUP ******************************************
  void setup()
  {
    Serial.println(" Quantes hores de treball ? ");
  }

//********************************* LOOP ******************************************
  void loop()
  {
      Serial.begin(9600);      // ARRANCAR A 9600 bps

  Serial.println("Here is division: ");

  Serial.print("a = ");
  Serial.println(a);
  Serial.print("b = ");
  Serial.println(b);
    
  d = a / b;
 
  Serial.print("a / b = ");
  Serial.println(d);

  }

//******************************* FUNCIONS ****************************************

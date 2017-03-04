/**********************************************************************************
**                                                                               **
**                              SWITCH CASE                                      **
**                                                                               **
** GORKA FERNÁNDEZ RAMOS                                          27/02/2017     **
**********************************************************************************/

//******************************* INCLUDES ****************************************

//******************************* VARIABLES ***************************************
int sensorReading = 2;
//******************************** SETUP ******************************************
void setup() // NOMÉS UNA EXECUCCIÓ 
{
  Serial.begin(9600); // VELOCITAT DE ARRANCADA DEL PORT SERIE 
  Serial.print("The day is "); // ESCRIU the day is...

  switch (sensorReading) {
    case 0:
      Serial.println("dark");
      break;
    case 1:
      Serial.println("dim");
      break;
    case 2:
      Serial.println("medium");
      break;
    case 3:
      Serial.println("bright");
      break;
    default:
      Serial.println("... I don't know!!!"); // aquest valor cambia segons l'entrada de valor de la variable sensorReading 
  }
}

  //********************************* LOOP ******************************************
  void loop()
  {
  }

  //******************************* FUNCIONS ****************************************

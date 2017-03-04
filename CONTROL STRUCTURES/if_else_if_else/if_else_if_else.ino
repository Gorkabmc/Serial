/**********************************************************************************
**                                                                               **
**                          if / else if / else                                  **
**                                                                               **
** GORKA FERNÁNDEZ RAMOS                                          6/02/2017      **
**********************************************************************************/

//******************************* INCLUDES ****************************************
int tempAigua1 = 120; // VALOR DE LA VARIABLE 
//******************************* VARIABLES ***************************************

//******************************** SETUP ******************************************
void setup()
{
  Serial.begin(9600);     // arrenca el por serie a 9600 bps

  if ( tempAigua1 >= 100) //
  {
    Serial.print("Aigua supera els 100C, esta bullint!"); // escriu a la pantall AIGUA SUPERA... si detecta > = 100
  }
  if ( tempAigua1 >=90 && tempAigua1 <100)
  {
    Serial.print("Aigua a punt de bullir"); // escriu a la pantalla AIGUA A PUNT DE BULLI si detecta que l'aigua es > = 90 
  }
  if ( tempAigua1 <90)
  {
    Serial.print("Aigua encara no bull"); // escriu AIGUA ENCARA NO BULL si detecta que l'aigua es < 90
  }


}

//********************************* LOOP ******************************************
void loop()
{
}

//******************************* FUNCIONS ****************************************

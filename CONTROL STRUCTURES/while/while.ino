/**********************************************************************************
**                                                                               **
**                          PLANTILLA CFGS                                       **
**                                                                               **
** GORKA FERNÁNDEZ RAMOS                                       22/01/2017        **
**********************************************************************************/

//******************************* INCLUDES ****************************************

//******************************* VARIABLES ***************************************
int comptar = 11;
int i = 0;
//******************************** SETUP ******************************************
void setup()
{
  Serial.begin(9600);
  Serial.print("Ara comptare de 0 a ");
  Serial.println(comptar);
  while (i <= comptar)
  {
    Serial.print(i);
    Serial.print("-");
    i++;
  }
}

//********************************* LOOP ******************************************
void loop()
{
}

//******************************* FUNCIONS ****************************************

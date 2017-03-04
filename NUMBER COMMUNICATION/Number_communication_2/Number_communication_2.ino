/**********************************************************************************
**                                                                               **
**                          PLANTILLA CFGS                                       **
**                                                                               **
** GORKA FERNÁNDEZ RAMOS                                       4/03/2017        **
**********************************************************************************/

//******************************* INCLUDES ****************************************

//******************************* VARIABLES ***************************************
int n1;
//******************************** SETUP ******************************************
void setup()
{
  Serial.begin(9600);        // initialize serial
  Serial.println("Entrar numero");
}

//********************************* LOOP ******************************************
void loop()
{
  while (Serial.available() > 0) {  // if there's any serial available, read it
    n1 = Serial.parseFloat();// look for valid int the incoming serial stream
    Serial.print(" Numero ");
    Serial.print(n1);

    if (n1 % 2 == 0 )
    {
      Serial.println (" <- parell ");
    }
    else
    {
      Serial.println ( " <- senar " );
    }
    if
    (Serial.read () == '\n')
      Serial.println ( "  " );
    Serial.println ( " Entrar un altre numero " );
  }
}
//******************************* FUNCIONS ****************************************

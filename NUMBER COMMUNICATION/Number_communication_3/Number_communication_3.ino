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
  Serial.begin(9600);
  Serial.println("Entrar numero");
}

//********************************* LOOP ******************************************
void loop()
{
  while (Serial.available() > 0) {
    n1 = Serial.parseFloat();
    Serial.print ("El numero ");
    Serial.print (n1);
    if (n1 / 10 == 0)
    {
      Serial.println (" te 1 xifra");
    }
    else if (n1 / 100 == 0)
    {
      Serial.println (" te 2 xifres");
    }
    else if (n1 / 1000 == 0)
    {
      Serial.println (" te 3 xifres");
    }
    else if (n1 / 10000 == 0)
    {
      Serial.println (" te 4 xifres");
    }
    else if (n1 / 100000 == 0)
    {
      Serial.println (" te 5 xifres");
    }
    else if (n1 / 1000000 == 0)
    {
      Serial.println (" te 6 xifres");
    }

    if (Serial.read() == '\n')
      Serial.println (" ");
    Serial.println ("Entra un altre numero");
  }
}
//******************************* FUNCIONS ****************************************

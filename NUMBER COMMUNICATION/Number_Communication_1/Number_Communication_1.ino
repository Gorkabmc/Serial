/**********************************************************************************
**                                                                               **
**                          PLANTILLA CFGS                                       **
**                                                                               **
** GORKA FERNÁNDEZ RAMOS                                       4/03/2017        **
**********************************************************************************/

//******************************* INCLUDES ****************************************

//******************************* VARIABLES ***************************************
float r1, r2;
float rSerie, rParalel;
//******************************** SETUP ******************************************
void setup()
{
  Serial.begin(9600);        // initialize serial
  Serial.println("Entra el valor de r1 i r2 (separats per una coma)");
}

//********************************* LOOP ******************************************
void loop()
{
  while (Serial.available() > 0) {  // if there's any serial available, read it
    r1 = Serial.parseInt();// look for valid int the incoming serial stream
    Serial.print("r1=");
    Serial.print(r1);
    Serial.print("  ohms  ");

    r2 = Serial.parseInt();
    Serial.print ("r2 = ");
    Serial.print (r2);
    Serial.println ("  Ohms  ");

    if (Serial.read() == '\n') {
      Serial.print ("rSerie = ");
      Serial.print (r1 + r2);
      Serial.print ("  ohms  ");

      Serial.print ("rParalel = "); // Escriu (rParalel = )
      Serial.print ((r1 * r2) / (r1 + r2));
      Serial.println ("  Ohms  ");
      Serial.println (" ");
      Serial.println ("Entra nous valors per r1 i r2");
    }
  }
}
//******************************* FUNCIONS ****************************************

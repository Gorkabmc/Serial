/**********************************************************************************
**                                                                               **
**                          NUMBER COMMUNICATION 1                               **
**                                                                               **
**   GORKA FERNÁNDEZ RAMOS                                         4/03/2017     **
**********************************************************************************/

//******************************* INCLUDES ****************************************

//******************************* VARIABLES ***************************************
float r1, r2;
float rSerie, rParalel; // VALOR DE LES VARIABLES
//******************************** SETUP ******************************************
void setup() // S'EXECUTA NOMÉS UN COP
{
  Serial.begin(9600);        // VELOCICTAT DEL PORT SERIE
  Serial.println("Entra el valor de r1 i r2 (separats per una coma)");
  // IMPRIMEIX entra el valor de r1 ...

}

//********************************* LOOP ******************************************
void loop() // S'EXECUTA REPETIDAMENT
{
  while (Serial.available() > 0) {  // LLEGEIX LA RSERIE
    r1 = Serial.parseInt();//
    Serial.print("r1="); // ESCRIU r1 =
    Serial.print(r1); // ESCRIU EL VALOR DE LA r1
    Serial.print("  ohms  "); // ESCRIU ohms

    r2 = Serial.parseInt();
    Serial.print ("r2 = "); // ESCRIU r2 = 
    Serial.print (r2); // ESCRIU EL VALOR DE r2
    Serial.println ("  Ohms  "); // ESCRIU ohms

    if (Serial.read() == '\n') {
      Serial.print ("rSerie = ");
      Serial.print (r1 + r2);
      Serial.print ("  ohms  ");

      Serial.print ("rParalel = "); // Escriu (rParalel = )
      Serial.print ((r1 * r2) / (r1 + r2)); // ESCRIU EL VALOR DE DIVIDIR ELS ()
      Serial.println ("  Ohms  "); // ESCRIU ohms 
      Serial.println (" "); // PASA A SEGUEN LINEA 
      Serial.println ("Entra nous valors per r1 i r2"); // ESCRIU entra nous...
    }
  }
}
//******************************* FUNCIONS ****************************************

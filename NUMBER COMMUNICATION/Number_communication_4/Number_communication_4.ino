/**********************************************************************************
**                                                                               **
**                          NUMBER COMMUNICATION 4                               **
**                                                                               **
**     GORKA FERNÁNDEZ RAMOS                                         5/03/2017   **
**********************************************************************************/

//******************************* INCLUDES ****************************************

//******************************* VARIABLES ***************************************
int hores;
int salari;
int salari_net; // VALORS DE VARIABLES 
//******************************** SETUP ******************************************
void setup() // S'EXECUTA UN COP 
{
  Serial.begin(9600); // VELOCITAT D ARRANC A 9600BPM
  Serial.println("Entrar numero"); // IMPRIMEIX entrar numero
}

//********************************* LOOP ******************************************
void loop() // S'EXECUTA REPETIDAMENT 
{ 
  while (Serial.available() > 0) {
    n1 = Serial.parseFloat(); 
    Serial.print ("El numero "); // IMPRIMEIX " El numero "
    Serial.print (n1);
    if (n1 / 10 == 0) // FA PRIMER LA DIVISIO 
    {
      Serial.println (" te 1 xifra");
      // SI AL FER LA DIVISIO DE N1 / 10 I DONA =0 IMPRIMEIX " te 1 xifra "
      Serial.println (" ");
    }
    else if (n1 / 100 == 0)
    {
      Serial.println (" te 2 xifres");
      // SI AL FER LA DIVISIO DE N1 / 100 I DONA =0 IMPRIMEIX " te 2 xifra "
      Serial.println (" ");
    }
    else if (n1 / 1000 == 0)
    {
      Serial.println (" te 3 xifres");
      // SI AL FER LA DIVISIO DE N1 / 1000 I DONA =0 IMPRIMEIX " te 3 xifra "
      Serial.println (" ");
    }
    else if (n1 / 10000 == 0)
    {
      Serial.println (" te 4 xifres");
      // SI AL FER LA DIVISIO DE N1 / 10000 I DONA =0 IMPRIMEIX " te 4 xifra "
      Serial.println (" ");
    }
    else if (n1 / 100000 == 0)
    {
      Serial.println (" te 5 xifres");
      // SI AL FER LA DIVISIO DE N1 / 100000 I DONA =0 IMPRIMEIX " te 5 xifra "
      Serial.println (" ");
    }
    else if (n1 / 1000000 == 0)
    {
      Serial.println (" te 6 xifres");
      // SI AL FER LA DIVISIO DE N1 / 1000000 I DONA =0 IMPRIMEIX " te 6 xifra "
      Serial.println (" ");
    }

    if (Serial.read() == '\n')
      Serial.println (" "); // ESCRIU UN ( _ )
    Serial.println ("Entra un altre numero !"); // IMPRIMEIX entrar un altre numero
  }
}
//******************************* FUNCIONS ****************************************

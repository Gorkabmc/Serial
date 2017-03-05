/**********************************************************************************
**                                                                               **
**                          NUMBER COMMUNICATION 2                               **
**                                                                               **
**    GORKA FERNÁNDEZ RAMOS                                         4/03/2017    **
**********************************************************************************/

//******************************* INCLUDES ****************************************

//******************************* VARIABLES ***************************************
int n1; // VALOR DE VARIABLE 
//******************************** SETUP ******************************************
void setup() // S'EXECUTA UN COP 
{
  Serial.begin(9600);        // VELOCITAT DE ARRANC A 9600BPM
  Serial.println("Entrar numero"); // IMPRIMEIX entrar numero..
}

//********************************* LOOP ******************************************
void loop() // S'EXECUTA REPETIDAMENT 
{
  while (Serial.available() > 0) {  // LLEGEIX ELS NUMEROS DEL SERIAL
    n1 = Serial.parseFloat();// 
    Serial.print(" Numero "); // IMPRIMEIX numero 
    Serial.print(n1); // IMPRIMEIX EL VALOR DE n1

    if (n1 % 2 == 0 )
    {
      Serial.println (" <- parell "); 
      // SI EL MODUL DE n1 DIVIDIT ENTRE 2 ES = 0 IMPRIMEIX parell
    }
    else
    {
      Serial.println ( " <- senar " );
      // SI EL MODUL DE n1 no es = 0 IMPRIMEIX senar
    }
    if
    (Serial.read () == '\n')
      Serial.println ( "  " ); // IMPRIMEIX UN ( _ )
    Serial.println ( " Entrar un altre numero " );
    // IMPRIMEIX entrar un altre numero
  }
}
//******************************* FUNCIONS ****************************************

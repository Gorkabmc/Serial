/**********************************************************************************
**                                                                               **
**                                   WHILE                                       **
**                                                                               **
**   GORKA FERNÁNDEZ RAMOS                                     20/02/2017        **
**********************************************************************************/

//******************************* INCLUDES ****************************************

//******************************* VARIABLES ***************************************
int comptar = 5;
int i = 0;   // DEFINIM EL VALOR DE LES VARIABLES 
//******************************** SETUP ******************************************
void setup() // NOMÉS S'EXECUTA UN COP 
{
  Serial.begin(9600); // VELOCITAT DE ARRANCADA DEL PORT SERIE 
  Serial.print("Ara comptare de 0 a "); // ESCRIU A LA PANTALLA ara compt..
  Serial.println(comptar);
  while (i <= comptar) // MENTRE EL VALOR DE LA i SIGUI MENOR O IGUAL A comptar 
  {
    Serial.print(i); // ESCRIURA EL VALOR DE i 
    Serial.print("-"); // ESCRIU UN -
    i++; // SUMARA UN 1 A EL VALOR DE i 
    
  }
}

//********************************* LOOP ******************************************
void loop()
{
}

//******************************* FUNCIONS ****************************************

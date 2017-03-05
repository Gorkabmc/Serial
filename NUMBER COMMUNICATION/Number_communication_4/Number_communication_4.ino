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
  Serial.println(" Quantes hores de treball ? "); // IMPRIMEIX Quantes hores...
}

//********************************* LOOP ******************************************
void loop() // S'EXECUTA REPETIDAMENT
{
  while (Serial.available() > 0) {
    hores = Serial.parseFloat();
    Serial.print (" EL SALARI PER "); // IMPRIMEIX " El salari per "
    Serial.print ( hores );
    if (hores < 38) // SI LES HORES SON INFERIORS A 38
    {
      salari = hores * 20 ; // MULTIPLICA LES HORES PER 20 I DONA EL SALARI
      Serial.print (" HORES DE TREBALL ES DE ");
      // ESCRIU hores de treball es de
    }
    else if (hores >= 38)
    {
      salari = hores * 20 ;
      Serial.print (" HORES DE TREBALL ES DE ");
      // IMPRIMEIX hores de treball es de
    }
    if (salari <= 800)
    {
      salari_net = salari - 0.1 ;
      Serial.print (salari_net);
      // IMPRIMEIX salari net es de
      Serial.println (" Euros ");
      // IMPRIMEIX euros
      Serial.println (" ");

    }
    else if (salari > 800)
    {
      salari_net = salari - 0.05 ;
      Serial.print (salari_net);
      // ESCRIU salarinet es de
      Serial.println (" Euros ");
      // IMPRIMEIX euros

    }
    if (Serial.read() == '\n')
      Serial.println (" "); // ESCRIU UN ( _ )
    Serial.println (" QUANTES HORES TREBALLES ?"); // IMPRIMEIX quantes hores..
  }
}
//******************************* FUNCIONS ****************************************

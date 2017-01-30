/**********************************************************************************
**                                                                               **
**                            HELLO WORLD                                        **
**                                                                               **
** GORKA FERNÁNDEZ RAMOS                                       22/01/2017        **
**********************************************************************************/

//******************************* INCLUDES ****************************************

//******************************* VARIABLES ***************************************

//******************************** SETUP ******************************************
void setup()                // run once, when the sketch starts
{
  Serial.begin(9600); 
   Serial.println("Escull el numero de l'operacio que vols realitzar?");
   Serial.println("  1.Comprovar numero de tarjeta de credit");
   Serial.println("  2.Comprovar numero de compte bancari");
   Serial.println("  3.Buscar un digit perdut de tarjeta de credit");
} //CADA LINEA VA CON SU ORDEN, SE GUARDA UN ESPACIO DESPUES DE LAS COMILLAS 
//********************************* LOOP ******************************************
void loop()                 // run over and over again
{
 // NINGUNA REPETICÓN 
}
//******************************* FUNCIONS ****************************************

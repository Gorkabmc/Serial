/**********************************************************************************
**                                                                               **
**                          MATH IS FUN 2                                        **
**                                                                               **
** GORKA FERNÁNDEZ RAMOS                                        6/01/2017        **
**********************************************************************************/

//******************************* INCLUDES ****************************************

//******************************* VARIABLES ***************************************
int a = 3;
int b = 4;
int h;             // VALOR DE LES VARIABLES 
//******************************** SETUP ******************************************
void setup()   // NOMÉS S'EXECUTA UN COP
{
 Serial.begin(9600);     // CONFIGURA PER ARRANCAR A 9600 bps
Serial.println(" Lets calculate a hypoteneuse "); //ESCRIU EN UNA LINEA lets calcu..
  h = sqrt(a*a + b*b); // hace la raiz cuadrada de las dos variables antes fijadas
  Serial.print("a = ");  
  Serial.println(a); // Escribe el valor de a en una linea nueva
  Serial.print("b = ");
  Serial.println(b); // Escribe el valor de B en una linea nueva 
  Serial.print("h = ");
  Serial.println(h); // Escribe el valor de H en una linea nueva
}
//********************************* LOOP ******************************************
void loop()
{
}

//******************************* FUNCIONS ****************************************

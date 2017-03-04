/**********************************************************************************
**                                                                               **
**                              Math if fun                                      **
**                                                                               **
** GORKA FERNÁNDEZ RAMOS                                       30/01/2017        **
**********************************************************************************/

//******************************* INCLUDES ****************************************

//******************************* VARIABLES ***************************************
int a = 5;
int b = 10;
int c = 20; // DEFINIMOS LAS VARIABES QUE USAREMOS 
//******************************** SETUP ******************************************
void setup()
{
  Serial.begin(9600);     // inicia puerto seria a 9600 bps
  Serial.println(" Here is some math: "); // escribe here is...
  Serial.print("a = "); // escribe a =
  Serial.println(a); // Escribe a continuación el resultado de a
  Serial.print("b = "); //...
  Serial.println(b);    //...
  Serial.print("c = "); //...
  Serial.println(c);    //...
  Serial.print("a + b = ");       // suma el valor de a + b
  Serial.println(a + b); //resultado
  Serial.print("a * c = ");       // multiplica el valor de a*c
  Serial.println(a * c);  //resultado
  Serial.print("c / b = ");       // divide c/b
  Serial.println(c / b); //resultado
  Serial.print("c % b = ");       // escribe el modulo de c%b
  Serial.println(c % b); // resultado
  Serial.print("b - c = ");       // escribe la resta de b-c
  Serial.println(b - c); // resultado
}

//********************************* LOOP ******************************************
void loop()
{
}

//******************************* FUNCIONS ****************************************

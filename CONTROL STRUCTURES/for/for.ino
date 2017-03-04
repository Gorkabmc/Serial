/**********************************************************************************
**                                                                               **
**                                    FOR                                        **
**                                                                               **
** GORKA FERNÁNDEZ RAMOS                                           20/02/2017    **
**********************************************************************************/

//******************************* INCLUDES ****************************************

//******************************* VARIABLES ***************************************
int comptar = 11; // VALOR DE LA VARIABLE 
//******************************** SETUP ******************************************
void setup() // NOMÉS UNA EXECUCIÓ 
{
    Serial.begin(9600);       // ARRENCA EL PORT SERIE A 9600 bps
  Serial.print("Ara comptare de 0 a "); // ESCRIU A LA PANTALLA ara compatre de 0 a...
  Serial.println(comptar);   // ESCRIU comptar EN UNA LINEA NOVA 
  for (int i=0; i <= comptar; i++) // CREEM EL VALOR DE i i li diem si es menor o igual a el valor de comptar que sumi 1 a la i 
  {
    Serial.print(i); // ESCRIU EL VALOR DE i 
    Serial.print("-"); // ESCRIU UN -
  } 
}

//********************************* LOOP ******************************************
void loop()
{
}

//******************************* FUNCIONS ****************************************

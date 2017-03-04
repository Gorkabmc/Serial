/**********************************************************************************
**                                                                               **
**                                  FOR 2                                        **
**                                                                               **
** GORKA FERNÁNDEZ RAMOS                                          20/02/2017     **
**********************************************************************************/

//******************************* INCLUDES ****************************************

//******************************* VARIABLES ***************************************
int comptar = 11; // VALOR DE VARIABLE 
//******************************** SETUP ******************************************
void setup() // NOMÉS UNA EXECUCIÓ
{
  Serial.begin(9600);       // ARRANCA EL PORT SERIE A 9600 bps
  Serial.print("Ara comptare de 0 a "); // ESCRIU ara comptare...
  Serial.println(comptar); // ES CRIU EL VALOR DEL COMPTE A UNA LINEA NOVA 
  for (int i = 0; i <= comptar; i++) // CREEM LA VARIABLE DE i I DIEM SI ES MENO O IGUAL A COPAT QUE SUMI 1
  {
    if (i < 11)
    {
      Serial.print(i); // ESCRIU VALOR DE i
      Serial.print("-"); // ESCRIU UN -
    }
    else if (i >= 11) // PERO AQUÍ SI ES IGUAL O MAJOR A UN 11 sense -
    {
      Serial.print(i); // ESCRIURA EL VALOR DE i sense el -
    }
  }
}

//********************************* LOOP ******************************************
void loop()
{
}

//******************************* FUNCIONS ****************************************

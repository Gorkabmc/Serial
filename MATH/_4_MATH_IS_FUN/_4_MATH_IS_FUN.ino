/**********************************************************************************
**                                                                               **
**                          MATH IS FUN 4                                        **
**                                                                               **
** GORKA FERNÁNDEZ RAMOS                                           6/01/2017     **
**********************************************************************************/

//******************************* INCLUDES ****************************************

//******************************* VARIABLES ***************************************
long drive_gb = 100;
long drive_mb;
//******************************** SETUP ******************************************
void setup() // EXECUTA NOMÉS UN COP
{
    Serial.begin(9600);     // ARRANCAR A 9600 bps
  Serial.print("Your HD is "); // ESCRIU your hd is..
  Serial.print(drive_gb); // ESCRIU ELS GB DEL ISCU DUR
  Serial.println(" GB large."); // ESCRIU LA CAPACITAT EN NOVA LINEA 

  drive_mb = 1024 * drive_gb;  // FA LA MULTIPLICACIÓ DE 1024 AMB LA CAPACITAT 

  Serial.print("It can store "); // LA QUE POT EMMMAGATZEMAR 
  Serial.print(drive_mb); // ESCRIU EL MB QUE TÉ
  Serial.println(" Megabytes!"); // ESCRIU A CONTINUCACIÓ ELS MB 
}

//********************************* LOOP ******************************************
void loop() // NO CAL 
{
}

//******************************* FUNCIONS ****************************************

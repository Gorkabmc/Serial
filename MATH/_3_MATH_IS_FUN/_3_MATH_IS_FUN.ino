/**********************************************************************************
**                                                                               **
**                          MATH IS FUN 3                                        **
**                                                                               **
** GORKA FERNÁNDEZ RAMOS                                       6/02/2017         **
**********************************************************************************/

//******************************* INCLUDES ****************************************

//******************************* VARIABLES ***************************************
int drive_gb = 5;
int drive_mb;
//******************************** SETUP ******************************************
void setup()
{
  Serial.begin(9600); // Configurar la velociadad serie a 9600 bps
  Serial.print("Your HD is ");
  Serial.print(drive_gb); // La variable definida anteriormente
  Serial.println(" GB large."); // Terminacion de la linea 
  drive_mb = 1024 * drive_gb; // Define el tipo de conversor entre GB y Megabytes
  Serial.print("It can store "); // Es el primer texto en la segunda linea
  Serial.print(drive_mb);
  Serial.println(" Megabytes!");
}

//********************************* LOOP ******************************************
void loop() // Necesitamos que esto esté aquí aunque esté vacío
{
}

//******************************* FUNCIONS ****************************************

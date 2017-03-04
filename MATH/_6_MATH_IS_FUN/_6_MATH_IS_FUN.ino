/**********************************************************************************
**                                                                               **
**                          Math is fun 6                                        **
**                                                                               **
** GORKA FERNÁNDEZ RAMOS                                        6/02/2017        **
**********************************************************************************/

//******************************* INCLUDES ****************************************

//******************************* VARIABLES ***************************************
int drive_gb = 100;
long drive_mb;
//******************************** SETUP ******************************************
void setup()  //Ejecutar una vez, cuando se inicia           
{
  Serial.begin(9600);       // Velocidad de encendido a 9600 bpm

  Serial.print("Your HD is ");  // escriu YOUR HD...
  Serial.print(drive_gb); // escriu els gb que te
  Serial.println(" GB large."); // la capacitat en GB en nova linea 

  drive_mb = drive_gb;
  drive_mb = drive_mb * 1024;   // multiplica 1024 * els gb de capacitat

  Serial.print("In teory, It can store "); // escriu IN TEORY... 
  Serial.print(drive_mb); // escriu els mb que te el disc
  Serial.println(" Megabytes!"); // escriu els MB
}

//********************************* LOOP ******************************************
void loop()      //
{
}

//******************************* FUNCIONS ****************************************

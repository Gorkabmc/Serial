/**********************************************************************************
**                                                                               **
**                          PLANTILLA CFGS                                       **
**                                                                               **
** GORKA FERNÁNDEZ RAMOS                                       22/01/2017        **
**********************************************************************************/

//******************************* INCLUDES ****************************************

//******************************* VARIABLES ***************************************
int drive_gb = 100;
long drive_mb;
//******************************** SETUP ******************************************
void setup()  //Ejecutar una vez, cuando se inicia           
{
  Serial.begin(9600);       //Velocidad de encendido a 9600

  Serial.print("Your HD is ");
  Serial.print(drive_gb);
  Serial.println(" GB large.");

  drive_mb = drive_gb;
  drive_mb = drive_mb * 1024;

  Serial.print("In teory, It can store ");
  Serial.print(drive_mb);
  Serial.println(" Megabytes!");
}

//********************************* LOOP ******************************************
void loop()      //Necesitamos que esto esté aquí aunque esté vacío
{
}

//******************************* FUNCIONS ****************************************

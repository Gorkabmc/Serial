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
long drive_kb;
long real_drive_mb;
long real_drive_kb;
//******************************** SETUP ******************************************
void setup()
{
  Serial.begin(9600); 
  Serial.print("Your HD is ");
  Serial.print(drive_gb);
  Serial.println(" Gb large");

  drive_mb = drive_gb;
  drive_mb = drive_mb * 1024;

  Serial.print("In teory, It can store ");
  Serial.print( drive_mb );
  Serial.print(" Megabytes");
}

//********************************* LOOP ******************************************
void loop()
{
}

//******************************* FUNCIONS ****************************************

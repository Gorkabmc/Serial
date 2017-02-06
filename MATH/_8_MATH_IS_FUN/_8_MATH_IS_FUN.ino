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
  Serial.print("Your HD is")
  Serial.print(drive_mb)
  Serial.println("Megabytes")

  drive_mb = drive_kb;
  drive_mb = drive_kb * 1000;

  Serial.print("In teory, It can store")
  Serial.print(drive_kb)
  Serial.println("Kilobytes")
}

//********************************* LOOP ******************************************
void loop()
{
}

//******************************* FUNCIONS ****************************************

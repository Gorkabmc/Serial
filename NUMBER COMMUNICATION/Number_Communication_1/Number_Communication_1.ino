/**********************************************************************************
**                                                                               **
**                          PLANTILLA CFGS                                       **
**                                                                               **
** GORKA FERNÁNDEZ RAMOS                                       4/03/2017        **
**********************************************************************************/

//******************************* INCLUDES ****************************************

//******************************* VARIABLES ***************************************
float r1, r2;             
float rSerie, rParalel;   
//******************************** SETUP ******************************************
void setup()
{
    Serial.begin(9600);        // initialize serial
  Serial.println("Entra el valor de r1 i r2 (separats per una coma)");
}

//********************************* LOOP ******************************************
void loop()
{
    while (Serial.available() > 0) {  // if there's any serial available, read it
    r1 = Serial.parseInt();// look for valid int the incoming serial stream
    CODI ALUMNE (mostra el valor de r1)
    r2 = Serial.parseInt();
    CODI ALUMNE (mostra el valor de r2)
    if (Serial.read() == '\n') { //look for newline. Is the end of your sentence
    CODI ALUMNE (calcula r1 i r2 en serie i paral·lel, mostra resultats i                      
                 fa de nou la pregunta inicial)
}

//******************************* FUNCIONS ****************************************

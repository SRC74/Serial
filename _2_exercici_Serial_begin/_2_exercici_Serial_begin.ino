/*********************************************************************
 **                                                                 **       
 **                          TÏTOL: Serial Hello World              ** 
 **                                                                 **
 **                                                                 ** 
 **  Nom: Salva Ramírez                          Data: 30/01/2017   **
 ********************************************************************/
 
//************************ INCLUDE ***********************************


//*********************** VARIABLES **********************************


//************************* SETUP ************************************

void setup()   // executa quan comencem           
{
  Serial.begin(9600); // configura la biblioteca serial a 9600 bps  
}



 
//************************** LOOP ************************************

void loop() // executa una vegada i una altra                    
{
  Serial.print("Hello world!");  // escriu Hello world!
  delay(1000); // escriu cada segon
}

//************************ FUNCIONS **********************************

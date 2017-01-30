/*********************************************************************
 **                                                                 **       
 **                          TÏTOL: Serial                          ** 
 **                                                                 **
 **                                                                 ** 
 **  Nom: Salva Ramírez                          Data: 30/01/2017   **
 ********************************************************************/
 
//************************ INCLUDE ***********************************


//*********************** VARIABLES **********************************


//************************* SETUP ************************************

void setup() {      // configura el final de sortida
  
  pinMode(13,OUTPUT); // Assigna el pin 13 com sortida
}


 

//************************** LOOP ************************************

void loop() {       // inicia el bucle del programa



  digitalWrite(13,HIGH); // Llegeix el pin digital 13 i l'encén
  delay(1000); // interval d'un segon encesa led
  digitalWrite(13,LOW); Llegeix  situació pin 13 i l'apaga
  delay(1000); Led apagat durant un segon.
 
}
//************************ FUNCIONS **********************************

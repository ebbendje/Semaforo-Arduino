int luz_carro[3] = {13,12,11};
int luz_peao[2] = {10,9};

void carro_avanca(){

  digitalWrite(luz_carro[0], HIGH);
  digitalWrite(luz_carro[1], LOW);
  digitalWrite(luz_carro[2], LOW);

  digitalWrite(luz_peao[0], HIGH);
  digitalWrite(luz_peao[1], LOW);
  
}

void carro_atento(){

  digitalWrite(luz_carro[0], LOW);
  digitalWrite(luz_carro[1], HIGH);
  digitalWrite(luz_carro[2], LOW);

  digitalWrite(luz_peao[0], HIGH);
  
}

void carro_para(){

  digitalWrite(luz_carro[0], LOW);
  digitalWrite(luz_carro[1], LOW);
  digitalWrite(luz_carro[2], HIGH);

  digitalWrite(luz_peao[0], LOW);
  digitalWrite(luz_peao[1], HIGH);
  
}

void setup() {

for(int i = 0; i < 3; i++)
  pinMode(luz_carro[i], OUTPUT);
for(int i = 0; i < 2; i++)
  pinMode(luz_peao[i], OUTPUT);   
  
}

void loop() {

  carro_avanca();
  delay(15000);
  
  carro_atento();
  delay(7500);
  
  carro_para();
  delay(15000);
  
}

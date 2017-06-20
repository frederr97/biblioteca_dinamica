//Função que realiza a potência de um número

int potencia(int num1, int pot){

	int result = 1;

	for(int i=0; i<pot; i++){
                result *= num1;

                if(pot == 0) {
                    result = 1;
                }
            }

            return result;
}
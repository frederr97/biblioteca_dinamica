//Função que realiza o fatorial de um inteiro

int fatorial(int num){

	int fat = 1;

	for(fat = 1; num > 1; num = num - 1){
		fat = fat * num;
	}

	return fat;

}
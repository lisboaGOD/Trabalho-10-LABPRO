// TRabalho 3 ;Antonio Lisboa de carvalho; 535865
#include <stdio.h>
#include <stdlib.h>

//MODELO

int main(){
   	//VariÃ¡veis que podem ser usadas
   	unsigned int x[200];
    int y;
   	int z;
   	int k;
   	int w;
   	int j;
   	
   	//#########################
    y = 0;
    for(j=0;j<200;j++){x[j]=0;} //Limpando meu vetor

   	    for(z=0;z<5000;z++){ //cabe até 5000 numeros
        printf("Digite o seu valor de 0 a 5000: ");
        scanf("%i",&y);
        if (y == -1){break;} //teste logico
        if(y>=0&&y<=5000){
            k = y/32; //Armazenar em que "casa" ele vai ficar
            w = y%32; //Armazena em que parte da casa o numero vai ficar
            x[k] = x[k] | 1<<(w);  // y é meu banco de dados q vou gardar todos os binários y =(000000), x=1 então y=(0000001). Se x=2, y vai ser(00000011).
            //Troca o 0 por 1 e o x da a casa
        }
        else{printf("Numero invalido\n");z--;}
    }
    
    for(k=0;k<200;k++){ //Printar todos os "numeros" armazenados no vetor

        for(y=0;y<32;y++){
            if((1<<y)&x[k]){printf("%i\n",y+(k*32));}
        }
    }   	
   	//#########################   
	return 0;  
}
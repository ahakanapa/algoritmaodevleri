#include <iostream>
#include <stdlib.h>
#include <time.h>

void randomfonksiyonu(int dizi[],int boyut,int b){
	
	srand(time(0));
	int i;
	for(i=0;i<boyut;i++){
		
		dizi[i]=0+rand()%b;		
	}
    for(i=0;i<100000;i++){
	printf("%d.sayi %d \n",i+1,dizi[i]); }
}

void selectionfonksiyonu(int dizi[],int boyut){
	
	int i,j,min;
	int c;
	
	for(i=0;i<boyut-1;i++){
	
		min=i;                      
		
		for(j=i+1;j<boyut;j++){
			
			if(dizi[i]>dizi[j]){
				
		min=j;
	    c=dizi[i];
	    dizi[i]=dizi[j];
	    dizi[j]=c;
		}
	}
}       for(i=0;i<100000;i++){
	printf("%d.sayi = %d \n",i+1,dizi[i]);
}

}

int main(){

    int sayilar[100000];

    randomfonksiyonu(sayilar,100000,10001);
    
    selectionfonksiyonu(sayilar,100000);

	
	return 0;
}

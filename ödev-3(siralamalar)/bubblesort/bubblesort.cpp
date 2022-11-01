#include <iostream>
#include <stdlib.h>
#include <time.h>

void randomfonksiyonu(int dizi[],int boyut,int c){
	srand(time(0));
	int i ;
	for(i=0;i<boyut;i++){		
	
	dizi[i]=0+rand()%c; }
	for(i=0;i<boyut;i++){
	
	printf("%d.sayi %d \n",i+1,dizi[i]); }

}
 
 
void kabarcikfonksiyonu(int dizi[],int boyut){
	
	int i,j,c;	
	for(i=0;i<boyut;i++){
		for(j=0;j<boyut-i;j++){
			
			if(dizi[j] > dizi[j+1]){
				
			c=dizi[j];
			dizi[j]=dizi[j+1];
			dizi[j+1]=c;
			}
		}
	}
    for(i=0;i<boyut;i++){	
	printf("%d.sayi = %d \n",i+1,dizi[i]);	}
} 



int main() {
	
	int sayilar[100000];
	
	randomfonksiyonu(sayilar,100000,10001);
	
	kabarcikfonksiyonu(sayilar,100000);
	
	
	return 0;
}

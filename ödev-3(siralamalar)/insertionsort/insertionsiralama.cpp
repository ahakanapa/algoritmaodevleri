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


void insertionfonksiyonu(int dizi[],int boyut){
	
	int a,b,i,c,j;
	
	for(i=1;i<boyut;i++){
		                               
		a=dizi[i];
		b=i-1;                   
	
		while(b>=0 && dizi[b]>a){
			
			 c=dizi[b];
		     dizi[b]=dizi[b+1];
		     dizi[b+1]=c;
		     
		     b=b-1;        	
		}	
	    			}						
		for(j=0;j<100000;j++){
			
			printf("%d.sayi %d \n",j,dizi[j]);
			
		}	
	}


int main() {
	
	int sayilar[100000];
	
	randomfonksiyonu(sayilar,100000,10001);
	
	insertionfonksiyonu(sayilar,100000);
	
	
	return 0;
}

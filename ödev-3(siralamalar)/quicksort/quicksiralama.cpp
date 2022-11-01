#include <iostream>
#include <stdlib.h>
#include <time.h>

void randomfonksiyonu(int dizi[],int boyut,int c){

	srand(time(0));
	int i;	
	for(i=0;i<boyut;i++){
		
		dizi[i]=0+rand()%c;		
	}
	for(i=0;i<boyut;i++){
		
		printf("%d.sayi %d \n",i+1,dizi[i]);
	}
}

void quicksiralama(int dizi[],int ilk, int son){
	
	int i,j,c,pivot;
	i=ilk;              
	j=son;                    
	pivot=dizi[(i+j)/2];         
	
	do{		
		while(dizi[i]<pivot){
		i++;}
		
			while(dizi[j]>pivot){
		    j--;}	
	
		if(i<=j){
			c=dizi[i];                           
			dizi[i]=dizi[j];
			dizi[j]=c;
			i++;
			j--;  }
			
	}while(i<j);     
	
	if(ilk<j){
		quicksiralama(dizi,ilk,j);}
	
	if(i<son){	
		quicksiralama(dizi,i,son);} 


}
int main() {
	
	int sayilar[100000];

	randomfonksiyonu(sayilar,100000,10001);

	quicksiralama(sayilar,0,99999);
	
	int i;
	
	for(i=0;i<100000;i++){	
	printf("%d.sayi %d \n",i+1,sayilar[i]);
	}
	
	return 0;
}

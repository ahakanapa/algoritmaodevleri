#include <iostream>

int farkfonksiyonu(int a, int b){
	
	int i;	// i, sayaç
	int c=0;
	int toplam1=0; 
        int toplam2=0;
   	int sonuc=0;
   	
	for(i=a;i<=b;i++){
		
	toplam1=toplam1+(i*i);
	}
	printf("kareler toplami = %d \n",toplam1); 
    
    for(i=a;i<=b;i++){
    	
    	c=c+i;
      toplam2=c*c;    	
    	    
	}
 printf("toplamin karesi = %d \n",toplam2);	
 
 printf("Sonuc= %d",(toplam2-toplam1));
 
 
}

int main() {
	
 farkfonksiyonu(0,100);	

 
	return 0;
}

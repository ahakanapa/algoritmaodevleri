#include <iostream>

void toplamfonksiyonu(int a,int b){
	
	int i;
	int c,d;
	int toplam=0;
	  
	  for(i=0;i<1000;i++){
	  	
	  	c=i%a;
	  	d=i%b;
	   
	  if(c==0 || d==0){
	  	
	  	printf("%d \n",i);
        toplam=toplam+i;	  	
	  }
	  	
	  }
	printf("3 ve 5'in kati sayilarin toplami = %d",toplam);
	
}


int main() {
 
	toplamfonksiyonu(3,5);
	
	return 0;
}

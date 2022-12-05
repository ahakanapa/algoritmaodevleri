#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct node{

int numara;
int vize;
int final;

char ad[25];
char soyad[25];

   struct node *next;

};

	

node*verikaydet(node*head){
	
	if(head==NULL){
		
		printf("Kaydedilecek ogrenci yok. \n");
	}else{
		FILE *dosya=fopen("veridosyasi.txt","w");
		node*a=head;
		
		while(a!=NULL){
			
			fprintf(dosya,"\n");
			fprintf(dosya,"%d \n",a->numara);
			fprintf(dosya,"%d \n",a->vize);
			fprintf(dosya,"%d \n",a->final);
			fprintf(dosya,"%s \n",a->ad);
			fprintf(dosya,a->soyad);
		
			
	
		
			a=a->next;
		}printf("kaydetme islemi basarili.\n\n");
		
		fclose(dosya);
	}
	

	return head;
}

node*verioku(node*head){
			
	FILE *dosya=fopen("veridosyasi.txt","r");

	
	if(dosya==NULL){
		
		printf("'veridosyasi.txt' adinda dosya yok, dosya olusturun.\n");
		
	}else{		
		
		int num,vize,final;
		char ad[25];
		char soyad[25];
	    char ch;
		
		while(ch!=EOF){
	    
	    fscanf(dosya,"%d",&num);
		fscanf(dosya,"%d",&vize);
		fscanf(dosya,"%d",&final);
		fscanf(dosya,"%s",&ad);
		fscanf(dosya,"%s",&soyad);
	    
								
			printf("Numara: %d   Ad: %s   Soyad: %s \nVize: %d  Final: %d\n-----------------------------------\n",num,ad,soyad,vize,final);	
		ch=fgetc(dosya);		
		}
	fclose(dosya);
}
	return head;
}




node*ogrencibul(node*head){
int h;
node*a=head;
	
if(a==NULL){
	
 	printf("Listede ogrenci yok.\n");
}	
else{
	printf("\nAranan ogrenci numarasini giriniz:\n");
    scanf("%d",&h);
	
	if(h==a->numara){
		printf("\nNumara: %d   Ad: %s   Soyad: %s  \nVize: %d  Final: %d \n ----------------------------------- \n",a->numara,a->ad,a->soyad,a->vize,a->final);
	}
else{
	printf("\n%d Numarali ogrenci listede yok.\n \n",h);
	
}
}

return head;	
}

node*ogrencisayisi(node*head){
	
	if(head==NULL){
		
		printf("Ogrenci sayisi: 0\n\n");
	}
	
	else{
		int toplam=0;
		node*temp=head;
		while(temp!=NULL){
			
			toplam=toplam+1;
			temp=temp->next;
		}
		
		printf("Ogrenci sayisi: %d \n \n",toplam);
	}
	
	
	return head;
}

node*ekle(node*head){
	
	node*ogr=(node*)malloc(sizeof(node));
	
	
	printf("Ogrenci adini giriniz:");
	scanf("%s",&ogr->ad);
		
	printf("Ogrenci soyadini giriniz:");
	scanf("%s",&ogr->soyad);
	
	printf("Ogrenci numarasini giriniz:");
	scanf("%d",&ogr->numara);
	
	printf("Ogrenci vize notunu giriniz:");
	scanf("%d",&ogr->vize);
	
	printf("Ogrenci final notunu giriniz:");
	scanf("%d",&ogr->final);
	
	
	if(head==NULL){
		
		head=ogr;
		head->next=NULL;
		
		
		printf("Kayit basarili, liste olusturuldu.\n \n");
		
	}else{
		
		ogr->next=head;
		head=ogr;
	    ogr->next;
	    
		
		printf("Kayit islemi basarili. \n \n");
	}
	
	return head;
	
}


node*silme(node*head){
	node *ogr=(node*)malloc(sizeof(node));
	
	if(head==NULL){
		
		printf("Liste bos. \n \n");
		
	}else{
	bool deger=false;
		int ogrno;
		printf("Silinecek ogrenci no:");
		scanf("%d",&ogrno);
		
		if(head->numara==ogrno && head->next==NULL){
			
			free(head);
			head=NULL;
			printf("Son ogrenci silindi \n \n");
		deger=true;
}
		
		
		else if(head->numara==ogrno && head->next!=NULL){
			
		node *u=head->next;
		free(head);
			
		head=u;
		printf("%d Numarali ogrenci silindi \n \n",ogrno);
	    deger=true;
}
		else{
					
		node *u=head;
		node *s=head;
		while(u->next!=NULL){
				
		if(u->numara==ogrno){
			s->next=u->next;
			free(u);
			printf("%d Numarali ogrenci silindi. \n \n",ogrno);
			break;
			deger=true;
        }
			s=u;
			u=u->next;
				
			}
		if(u->numara==ogrno){
		 
		 s->next=NULL;
		 free(u);
		 printf("%d Numarali ogrenci silindi \n \n",ogrno);
		 deger=true;
		}
		
	  	}	
				
if(!deger){
	printf("Listede %d numarali ogrenci yok.\n\n",ogrno);
}		
		
			}
return head;	  } 

node*yazdir(node*head){
	
	if(head==NULL){
		
		printf("Liste bos, ogrenci ekleyiniz\n \n");		
	}
	else{
		node *index=head;
		
		while(index!=NULL){
			
			printf("Numara: %d   Ad: %s   Soyad: %s  \nVize: %d  Final: %d \n ----------------------------------- \n",index->numara,index->ad,index->soyad,index->vize,index->final);
	
		index=index->next;
		
		}
	}
return head;
}





    int	main () {
    	
    printf("***************OGRENCI KAYIT UYGULAMASI***************\n \n");
   
	node *head=NULL;
    
    
    
	while(1){
	
	printf("Yapmak istediginiz islemi seciniz:[0-7]\n\n");
	printf("1-) OGRENCI EKLE\n");
    printf("2-) OGRENCI SIL\n");	
    printf("3-) OGRENCILERI GORUNTULE \n");
	printf("4-) DOSYADAN VERI OKU \n");
	printf("5-) DOSYAYA VERI KAYDET \n");
	printf("6-) OGRENCI BUL\n");
	printf("7-) TOPLAM OGRENCI SAYISI \n");	
	printf("0-) UYGULAMADAN CIKIS\n \n");	
	
	int secim,b;
	scanf("%d",&secim);
	
		switch(secim){
		
		case 1: head=ekle(head);
		break;
		
		case 2: head=silme(head);
		break;
		
    	case 3: head=yazdir(head);
		break;
		
		case 4: head=verioku(head);
		break;
		
		case 5: head=verikaydet(head);
		break;
		
		case 6: head=ogrencibul(head);
		break;
		
		case 7: head=ogrencisayisi(head);
		break;
		
		
		
		case 0: printf("uygulamadan cikis yapiliyor...");
		exit (0);
	
		default: printf("lutfen seciminizi belirtilen aralikta yapiniz.[0-7] \n \n \n");
		break;
			
	}
		
}

	return 0;
}
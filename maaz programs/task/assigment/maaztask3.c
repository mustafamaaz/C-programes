#include<stdio.h>
int main(){
int D,M,Y;
	int opt;
	do 
	{   
		printf("Enter date of birth \n DD-MM-YY\n");
		scanf("%d-%d-%d",&D,&M,&Y);
	    
	    if(M>0 && M<=12 && Y>0){
	    
		   if(M==3 && D>=21 )
			if(D<=31 && D>=0)
			printf("aries\n");
			else printf("invalid date for march\n");
			
				 else if(M==4 && D<=19 ){
		 		if(D<=30 && D>=0)
		 		printf("aries\n");
		 		else printf("invalid date for april\n");
		     	 }
		  
	else if (M==4 && D>=20 ){
		  			if(D<=30 && D>=0)
		 		printf("taurs\n");
		 		else printf("invalid date for april\n");
	}
		  	
		  else if (M==5 && D<=20){
		  		if(D<=31&& D>=0)
		 		printf("taurs\n");
		 		else printf("invalid date for may\n ");}
		  	
		else if (M==5 && D>=21) 
			{
					if(D<=31 && D>=0)
		 		printf("gemini\n");
		 		else printf("invalid date for may\n");}
				
				  
	     	    else if (M==6 && D<=20) {
		
			    if(D<=30 && D>=0)
		 		printf("Gemini\n");
		 		else printf("invalid date for june\n");}
			
			
		
			else if (M==6 && D>=21){
			
	     if(D<=30 && D>=0)
		 	printf("cancer\n");
		 else printf("invalid date for june\n");}
		 
		 
		 else if (M==7 && D<=22){
		 
		 if(D<=31 && D>=0)
			printf("cancer\n");
			 else printf("invalid date for july\n");}
		
			else if(M==7 && D>=23) {
			
				 if(D<=31 && D>=0)
			printf("leo\n");
			 else printf("invalid date for july\n ");}
			
			
			else if  (M==8 && D<=22){
			
			 if(D<=31 && D>=0)
			printf("leo\n");
				 else printf("invalid date for august\n");
		}
	
			else if(M==8 && D>=23 ){
			
						 if(D<=31 && D>=0)
			printf("virgo\n");
				 else printf("invalid date for august\n");
		}
			
			else if  (M==9 &&D<=22)
		{
				if(D<=30 && D>=0)
			printf("virgo\n");
			 else printf("invalid date for september\n");
		}
			
			else if(M==9 && D>=23) {
			
			if(D<=30 && D>=0)
			printf("libra\n");
			 else printf("invalid date for september\n");	}
			
			
			
			else if (M==10 && D<=22){
			
				if(D<=31 && D>=0)
			printf("libra\n");
			 else printf("invalid date for october\n");	
	}
			
			else if(M==10 && D>=23) 
	{
			if(D<=31 && D>=0)
			printf("scorpio\n");
			else printf("invalid date for october\n");	
	}
			
			
			
			else if  (M==11 && D<=21)
	{
			if(D<=30 && D>=0)
			printf("scorpio\n");
		    else printf("invalid date for november\n");	
		}
			else if(M==11 && D>=22)
		{
						if(D<=30 && D>=0)
			printf("sagittarius\n");
				 else printf("invalid date for november\n");	
		}
			
			
			else if  (M==12 && D<=21)
		{
		if(D<=31 && D>=0)
			printf("sagittarius\n");
			else printf("invalid date for december\n");	
		}
			else if(M==12 && D>=22 ) 
		{
			if(D<=31 && D>=0)
			printf("capricon\n");
			else  printf("invalid date for december\n");
		}
			else if (M==1 && D<=19)
		{
		if(D<=31 && D>=0)
				printf("capricon\n");
			else printf("invalid date for january\n");
		}
			else if (M==1 && D >=20) 
		{
				if(D<=31 && D>=0)
				printf("aquaras\n");
				else printf("invalid date for january\n");
		}
			else if (M==2 && D<=18) 
		{
				if(D<=28 && D>=0)
			printf("Aquarius\n"); 
			else printf("invalid date for february\n");
		}
			else if(M==2 && D >=19)
		{
				if(D<=28 &&D>=0)
			printf("pisces\n");
			else printf("invalid date for february\n");
		}
			
		    else if(M==3 && D<=20)
		{
		if(D<=31&& D>=0)
			printf("pisces\n");
				else printf("invalid date for march\n");
			}

       }else {
	   printf("you have entered invalid month");}
	   
		printf("wanna check again?\n press Y for yes\n ");
		scanf("%s",&opt);
	} while ('y'==opt || 'Y'==opt);
	
	
	 
}
#include<stdio.h>
int main()
{
	int choice;
	float var;
	do
	{
		printf("\n\nCHECK YOUR SUSTAINABILITY\n");
		printf("\n1.CHECK ELECTRICITY USAGE");
		printf("\n2.HEALTHY FOOD LIFESTYLES");
		printf("\n3.CHECK WATER USAGE");
		printf("\n4.EXIT");
		printf("\nENTER YOUR CHOICE:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:{
					printf("\nENTER DAILY CONSUMED UNITS OF ELECTRICITY(MU):");
					scanf("%f",&var);
					if(var>88.34)
					{
						printf("\nEXCEEDING DAILY USAGE");
						printf("\nSOME WAYS TO REDUCE ELECTRICITY CONSUMPTION IS BY");
						printf("\n1.USING ENERGY EFFICIENT APPLIANCES");
						printf("\n2.INSTALLING SOLAR PANELS");
						printf("\n3.USING LEDS");
						printf("\n4.UNPLUG UNSUSED ELECTRONICS");
					}
					else
						printf("\nUNDER AVERAGE CONSUMPTION");
					break;
			       }
			case 2:{
					printf("\n1.EAT A HEALTHY DIET");
					printf("\n2.REDUCE INTAKE OF HARMFUL FATS");
					printf("\n3.DRINK SAFE WATER ONLY");
					printf("\n4.AVOID HARMFUL USE OF ALCOHOL");
					printf("\n5.PREPARE FOOD CORRECTLY");
					printf("\n6.HAVE REGULAR CHECKUPS");
					break;
				   }  
			case 3:{
					printf("\nENTER WATER CONSUMED PER DAY:");
					scanf("%f",&var);
					if(var>250)
					{
						printf("\nEXCESS WATER IS BEING USED");			
						printf("TIPS TO SAVE WATER");
						printf("1.\nCHECK YOUR TOILET FOR LEAKS");
						printf("2.\nTAKE SHORTER SHOWERS.");
						printf("3.\nINSTALL WATER-SAVING HOWER HEADS OR FLOW RESTRICTORS");
						printf("4.\nTURN OFF THE WATER WHILE BRUSHING YOUR TEETH");
						printf("5.\nTURN OFF THE WATER WHILE SHAVING");
					}
					else
						printf("\nUNDER AVERAGE CONSUMPTION");
					break;
				   }          
			default:printf("\nENTER A VALID OPTION");		
		}
	}while(choice!=4);
	return 1;	
}

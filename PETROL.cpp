#include<stdio.h>
int main()
{
	int f,pet,die;
	float p,d;
	char pol;	
	printf("Litre or Price (l / p)\n");
	scanf("%c",&pol);
	printf("Enter Fuel (1 for Petrol / 2 for Diesal)\n");
	scanf("%d",&f);

	if(f==1)
	{
		if(pol=='p')
		{
			printf("How much rupees Petrol you want\n");
			scanf("%d",&pet);
			p=pet*0.0095;
			printf("\n%f liter petrol you got \n Thank You Visit Again :)\n",p);
		}
		else
		{
			printf("How much Liter Petrol you want\n");
			scanf("%d",&pet);
			p=pet*106.2;
			printf("\n%f You want to pay \n Thank You Visit Again :)\n",p);
		}
	}
	else
	{
		if(pol=='p')
		{
			printf("How much rupees Diesel you want\n");
			scanf("%d",&die);
			d=die*0.0107;
			printf("\n%f liter Diesel you got \n Thank You Visit Again :)\n",d);
		}
		else
		{
			printf("How much Liter Diesel you want\n");
			scanf("%d",&die);
			d=die*93.1;
			printf("\n%f You want to pay \n Thank You Visit Again :)\n",d);
		}
	}
	return 0;
}

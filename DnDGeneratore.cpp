#include<stdlib.h>
#include<stdio.h>
#include<time.h>
int main()
{
	int razza,classe,fo,des,cos,in,sag,car,boFor=0,boDes=0,boCos=0,boInt=0,boSag=0,boCar=0,p=0,pm=0,totFor,totDes,totCos,totInt,totSag,totCar,hp,mo,proFor,proDes,proCos,proInt,proSag,proCar;
	srand(time(NULL));
	razza=1+rand()%56;
	printf("RAZZA:	");
	switch(razza) //tutte le razze
	{
		case 1:
			printf("Elfo");
			boDes=2;
			boInt=2;
			boCos=-2;
			break;
		case 2:
			printf("Gnomo");
			boCos=2;
			boCar=2;
			boFor=-2;
			break;
		case 3:
			printf("Halfling");
			boDes=2;
			boCar=2;
			boFor=-2;
			break;
		case 4:
			printf("Mezzelfo");
			p++;
			break;
		case 5:
			printf("Mezzorco");
			p++;
			break;
		case 6:
			printf("Nano");
			boCos=2;
			boSag=2;
			boCar=-2;
			break;
		case 7:
			printf("Umano");
			p++;
			break;
		case 8:
			printf("Aasimar");
			boSag=2;
			boCar=2;
			break;
		case 9:
			printf("Coboldo");
			boDes=2;
			boFor=-4;
			boCos=-2;
			break;
		case 10:
			printf("Dhampir");
			boDes=2;
			boCar=2;
			boCos=-2;
			break;
		case 11:
			printf("Drow");
			boDes=2;
			boCar=2;
			boCos=-2;
			break;
		case 12:
			printf("Felinide");
			boDes=2;
			boSag=-2;
			boCar=2;
			break;
		case 13:
			printf("Ghermito");
			boDes=2;
			boCar=2;
			boSag=-2;
			break;
		case 14:
			printf("Goblin");
			boFor=-2;
			boDes=4;
			boCar=-2;
			break;
		case 15:
			printf("Hobgoblin");
			boDes=2;
			boCos=2;
			break;
		case 16:
			printf("Ifrit");
			boDes=2;
			boCar=2;
			boSag=-2;
			break;
		case 17:
			printf("Ondine");
			boDes=2;
			boSag=2;
			boFor=-2;
			break;
		case 18:
			printf("Orco");
			boFor=4;
			boInt=-2;
			boSag=-2;
			boCar=-2;
			break;
		case 19:
			printf("Oreade");
			boFor=2;
			boSag=2;
			boCar=-2;
			break;
		case 20:
			printf("Rattoide");
			boDes=2;
			boInt=2;
			boFor=-2;
			break;
		case 21:
			printf("Silfide");
			boDes=2;
			boInt=2;
			boCos=-2;
			break;
		case 22:
			printf("Tengu");
			boDes=2;
			boSag=2;
			boCos=-2;
			break;
		case 23:
			printf("Tiefling");
			boDes=2;
			boInt=2;
			boCar=-2;
			break;
		case 24:
			printf("Changeling");
			boSag=2;
			boCar=2;
			boCos=-2;
			break;
		case 25:
			printf("Drow Nobile");
			boDes=4;
			boInt=2;
			boSag=2;
			boCar=2;
			boCos=-2;
			break;
		case 26:
			printf("Duergar");
			boCos=2;
			boSag=2;
			boCar=-4;
			break;
		case 27:
			printf("Grippli");
			boDes=2;
			boSag=2;
			boFor=-2;
			break;
		case 28:
			printf("Kitsune");
			boDes=2;
			boCar=2;
			boFor=-2;
			break;
		case 29:
			printf("Marinide");
			boCos=2;
			boCar=2;
			boDes=2;
			break;
		case 30:
			printf("Nagaji");
			boFor=2;
			boCar=2;
			boInt=-2;
			break;
		case 31:
			printf("Samsaran");
			boInt=2;
			boSag=2;
			boCos=-2;
			break;
		case 32:
			printf("Strix");
			boDes=2;
			boCar=-2;
			break;
		case 33:
			printf("Suli");
			boFor=2;
			boInt=-2;
			boCar=2;
			break;
		case 34:
			printf("Svirfneblin");
			boFor=-2;
			boDes=2;
			boSag=2;
			boCar=-4;
			break;
		case 35:
			printf("Uomo Pesce");
			boCos=2;
			boCar=2;
			boSag=-2;
			break;
		case 36:
			printf("Vanara");
			boDes=2;
			boSag=2;
			boCar=-2;
			break;
		case 37:
			printf("Vishkanya");
			boDes=2;
			boCar=2;
			boSag=-2;
			break;
		case 38:
			printf("Wayang");
			boDes=2;
			boInt=2;
			boSag=-2;
			break;
		case 39:
			printf("Abitatore del Profondo Ibrido");
			boCos=2;
			boSag=2;
			boDes=-2;
			break;
		case 40:
			printf("Androide");
			boDes=2;
			boInt=2;
			boCar=-2;
			break;
		case 41:
			printf("Astomoi");
			boInt=2;
			boSag=2;
			boCos=-2;
			break;
		case 42:
			printf("Centauro");
			boFor=4;
			boDes=2;
			boCos=2;
			boSag=2;
			break;
		case 43:
			printf("Drider");
			boFor=2;
			boDes=2;
			boCos=4;
			boSag=2;
			break;
		case 44:
			printf("Gargoyle");
			boFor=2;
			boCos=4;
			boInt=-2;
			boSag=-2;
			boCar=-2;
			break;
		case 45:
			printf("Gathlain");
			boCar=2;
			boDes=2;
			boCos=-2;
			break;
		case 46:
			printf("Ghoran");
			boCos=2;
			boCar=2;
			boInt=-2;
			break;
		case 47:
			printf("Gnoll");
			boFor=2;
			boCos=2;
			break;
		case 48:
			printf("Kasatha");
			boDes=2;
			boSag=2;
			break;
		case 49:
			printf("Lucertoloide");
			boFor=2;
			boCos=2;
			break;
		case 50:
			printf("Mutapelle");
			boSag=2;
			boInt=-2;
			pm++;
			break;
		case 51:
			printf("Ogre");
			boFor=4;
			boCos=2;
			boInt=-2;
			boCar=-2;
			break;
		case 52:
			printf("Rettiloide");
			boFor=2;
			boCar=2;
			boDes=-2;
			break;
		case 53:
			printf("Shabti");
			boCos=2;
			boCar=2;
			break;
		case 54:
			printf("Trox");
			boFor=6;
			boInt=-2;
			boSag=-2;
			boCar=-2;
			break;
		case 55:
			printf("Vivarano");
			boDes=2;
			boInt=-2;
			boSag=2;
			break;
		case 56:
			printf("Wyrwood");
			boDes=2;
			boInt=2;
			boCar-2;
			break;
	}
	classe=1+rand()%40;
	printf("\nCLASSE:	");
	switch(classe) //tutte le classi (escluse revisioni)
	{
		case 1:
			printf("Barbaro");
			hp=1+rand()%12;
			mo=((1+rand()%6)+(1+rand()%6)+(1+rand()%6))*10;
			break;
		case 2:
			printf("Bardo");
			hp=1+rand()%8;
			mo=((1+rand()%6)+(1+rand()%6)+(1+rand()%6))*10;
			break;
		case 3:
			printf("Chierico");
			hp=1+rand()%8;
			mo=((1+rand()%6)+(1+rand()%6)+(1+rand()%6)+(1+rand()%6))*10;
			break;
		case 4:
			printf("Druido");
			hp=1+rand()%8;
			mo=((1+rand()%6)+(1+rand()%6))*10;
			break;
		case 5:
			printf("Guerriero");
			hp=1+rand()%10;
			mo=((1+rand()%6)+(1+rand()%6)+(1+rand()%6)+(1+rand()%6)+(1+rand()%6))*10;
			break;
		case 6:
			printf("Ladro");
			hp=1+rand()%8;
			mo=((1+rand()%6)+(1+rand()%6)+(1+rand()%6)+(1+rand()%6))*10;
			break;
		case 7:
			printf("Mago");
			hp=1+rand()%6;
			mo=((1+rand()%6)+(1+rand()%6))*10;
			break;
		case 8:
			printf("Monaco");
			hp=1+rand()%8;
			mo=(1+rand()%6)*10;
			break;
		case 9:
			printf("Paladino");
			hp=1+rand()%10;
			mo=((1+rand()%6)+(1+rand()%6)+(1+rand()%6)+(1+rand()%6)+(1+rand()%6))*10;
			break;
		case 10:
			printf("Ranger");
			hp=1+rand()%10;
			mo=((1+rand()%6)+(1+rand()%6)+(1+rand()%6)+(1+rand()%6)+(1+rand()%6))*10;
			break;
		case 11:
			printf("Stregone");
			hp=1+rand()%6;
			mo=((1+rand()%6)+(1+rand()%6))*10;
			break;
		case 12:
			printf("Alchimista");
			hp=1+rand()%8;
			mo=((1+rand()%6)+(1+rand()%6)+(1+rand()%6))*10;
			break;
		case 13:
			printf("Cavaliere");
			hp=1+rand()%10;
			mo=((1+rand()%6)+(1+rand()%6)+(1+rand()%6)+(1+rand()%6)+(1+rand()%6))*10;
			break;
		case 14:
			printf("Convocatore");
			hp=1+rand()%8;
			mo=((1+rand()%6)+(1+rand()%6))*10;
			break;
		case 15:
			printf("Fattucchiere");
			hp=1+rand()%6;
			mo=((1+rand()%6)+(1+rand()%6)+(1+rand()%6))*10;
			break;
		case 16:
			printf("Inquisitore");
			hp=1+rand()%8;
			mo=((1+rand()%6)+(1+rand()%6)+(1+rand()%6)+(1+rand()%6))*10;
			break;
		case 17:
			printf("Magus");
			hp=1+rand()%8;
			mo=((1+rand()%6)+(1+rand()%6)+(1+rand()%6)+(1+rand()%6))*10;
			break;
		case 18:
			printf("Morfico");
			hp=1+rand()%10;
			mo=((1+rand()%6)+(1+rand()%6)+(1+rand()%6))*10;
			break;
		case 19:
			printf("Oracolo");
			hp=1+rand()%8;
			mo=((1+rand()%6)+(1+rand()%6)+(1+rand()%6))*10;
			break;
		case 20:
			printf("Pistolero");
			hp=1+rand()%10;
			mo=((1+rand()%6)+(1+rand()%6)+(1+rand()%6)+(1+rand()%6)+(1+rand()%6))*10;
			break;
		case 21:
			printf("Vigilante");
			hp=1+rand()%8;
			mo=((1+rand()%6)+(1+rand()%6)+(1+rand()%6)+(1+rand()%6)+(1+rand()%6))*10;
			break;
		case 22:
			printf("Antipaladino");
			hp=1+rand()%10;
			mo=((1+rand()%6)+(1+rand()%6)+(1+rand()%6)+(1+rand()%6)+(1+rand()%6))*10;
			break;
		case 23:
			printf("Ninja");
			hp=1+rand()%8;
			mo=((1+rand()%6)+(1+rand()%6)+(1+rand()%6)+(1+rand()%6))*10;
			break;
		case 24:
			printf("Samurai");
			hp=1+rand()%10;
			mo=((1+rand()%6)+(1+rand()%6)+(1+rand()%6)+(1+rand()%6)+(1+rand()%6))*10;
			break;
		case 25:
			printf("Arcanista");
			hp=1+rand()%6;
			mo=((1+rand()%6)+(1+rand()%6))*10;
			break;
		case 26:
			printf("Attaccabrighe");
			hp=1+rand()%10;
			mo=((1+rand()%6)+(1+rand()%6)+(1+rand()%6))*10;
			break;
		case 27:
			printf("Cacciatore");
			hp=1+rand()%8;
			mo=((1+rand()%6)+(1+rand()%6)+(1+rand()%6)+(1+rand()%6))*10;
			break;
		case 28:
			printf("Intrepido");
			hp=1+rand()%10;
			mo=((1+rand()%6)+(1+rand()%6)+(1+rand()%6)+(1+rand()%6)+(1+rand()%6))*10;
			break;
		case 29:
			printf("Investigatore");
			hp=1+rand()%8;
			mo=((1+rand()%6)+(1+rand()%6)+(1+rand()%6))*10;
			break;
		case 30:
			printf("Iracondo di Stirpe");
			hp=1+rand()%10;
			mo=((1+rand()%6)+(1+rand()%6)+(1+rand()%6))*10;
			break;
		case 31:
			printf("Predatore");
			hp=1+rand()%10;
			mo=((1+rand()%6)+(1+rand()%6)+(1+rand()%6)+(1+rand()%6)+(1+rand()%6))*10;
			break;
		case 32:
			printf("Sacerdote Guerriero");
			hp=1+rand()%8;
			mo=((1+rand()%6)+(1+rand()%6)+(1+rand()%6)+(1+rand()%6)+(1+rand()%6))*10;
			break;
		case 33:
			printf("Scaldo");
			hp=1+rand()%8;
			mo=((1+rand()%6)+(1+rand()%6)+(1+rand()%6))*10;
			break;
		case 34:
			printf("Sciamano");
			hp=1+rand()%8;
			mo=((1+rand()%6)+(1+rand()%6)+(1+rand()%6))*10;
			break;
		case 35:
			printf("Cineta");
			hp=1+rand()%8;
			mo=(1+rand()%6)*10;
			break;
		case 36:
			printf("Medium");
			hp=1+rand()%8;
			mo=((1+rand()%6)+(1+rand()%6)+(1+rand()%6)+(1+rand()%6))*10;
			break;
		case 37:
			printf("Mesmerista");
			hp=1+rand()%8;
			mo=((1+rand()%6)+(1+rand()%6)+(1+rand()%6))*10;
			break;
		case 38:
			printf("Occultista");
			hp=1+rand()%8;
			mo=((1+rand()%6)+(1+rand()%6)+(1+rand()%6)+(1+rand()%6))*10;
			break;
		case 39:
			printf("Parapsichico");
			hp=1+rand()%6;
			mo=((1+rand()%6)+(1+rand()%6))*10;
			break;
		case 40:
			printf("Spiritista");
			hp=1+rand()%8;
			mo=((1+rand()%6)+(1+rand()%6))*10;
			break;
	}
	fo=(1+rand()%6)+(1+rand()%6)+(1+rand()%6);
	des=(1+rand()%6)+(1+rand()%6)+(1+rand()%6);
	cos=(1+rand()%6)+(1+rand()%6)+(1+rand()%6);
	in=(1+rand()%6)+(1+rand()%6)+(1+rand()%6);
	sag=(1+rand()%6)+(1+rand()%6)+(1+rand()%6);
	car=(1+rand()%6)+(1+rand()%6)+(1+rand()%6);
	totFor=fo+boFor;
	totDes=des+boDes;
	totCos=cos+boCos;
	totInt=in+boInt;
	totSag=sag+boSag;
	totCar=car+boCar;
	proFor=(totFor-10)/2;
	proDes=(totDes-10)/2;
	proCos=(totCos-10)/2;
	proInt=(totInt-10)/2;
	proSag=(totSag-10)/2;
	proCar=(totCar-10)/2;
	printf("\n\nSTATISTICA	ROLL	BONUS	TOTALE	B.PROVA\nFORZA		%d	%d	%d	%d\nDESTREZZA	%d	%d	%d	%d\nCOSTITUZIONE	%d	%d	%d	%d\nINTELLIGENZA	%d	%d	%d	%d\nSAGGEZZA	%d	%d	%d	%d\nCARISMA		%d	%d	%d	%d\n",fo,boFor,totFor,proFor,des,boDes,totDes,proDes,cos,boCos,totCos,proCos,in,boInt,totInt,proInt,sag,boSag,totSag,proSag,car,boCar,totCar,proCar);
	if(p==1)
		printf("Possibile aggiungere 2 a una statistica\n");
	if(pm==1)
		printf("Possibile aggiungere 2 a Forza, Destrezza o Costituzione\n");
	printf("VITA	%d\nSOLDI	%d",hp,mo);
	printf("\n\n");
	system("pause");
	return 0;
}

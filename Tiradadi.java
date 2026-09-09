import java.util.Scanner;
public class Tiradadi{
	public static void main(String args[]){
		Scanner input=new Scanner(System.in);
		int in=-1;
		int r;
		String b;
		do{ 
			System.out.println("\n[1]Tira un d6");
			System.out.println("[2]Tira un d20");
			System.out.println("[3]Tira un dado con valore personalizzato");
			System.out.println("[0]Termina programma");
			System.out.print("\nInput: ");
			in=input.nextInt();
			switch(in){
				case 1:
					System.out.println("\nRisultato tiro: "+ roll(6) );
					break;
				case 2:
					System.out.println("\nRisultato tiro: "+ roll(20) );
					break;
				case 3:
					System.out.print("Valore dado da tirare: ");
					r=input.nextInt();
					if(r<1){
						System.out.println("\nValore non valido!");
						break;
					}
					else{
						System.out.println("Risultato tiro: "+ roll(r) );
						break;
					}
				case 0:
					System.exit(0);
					break;
				default:
					System.out.println("Input invalido!");
					break;
			}
			System.out.print("\nPremi Invio per continuare...");
			b=input.nextLine();
			b=input.nextLine();
		}while(in!=0);
	}
	private static int roll(int max){
		int res = (int) (Math.random()*max) +1;
		return res;
	}
}
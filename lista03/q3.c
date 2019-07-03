using System;

public class Ex03
{
	public static void Main()
	{		
		
		for(int i = 1; i <= 10; i ++){
			
			Console.WriteLine("Digite um número:\n");
			String numero = Console.ReadLine();
		
			double numeroDouble = Convert.ToDouble(numero);
			
			double dobro = numeroDouble * 2;

			Console.WriteLine("\nO dobro de " + numero + " é " + dobro + "\n");
			
		}
			
	}
}
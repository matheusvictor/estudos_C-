using System;

public class Ex06
{
	public static void Main()
	{		
		Console.WriteLine("Digite a qtd de números que deseja verificar se é par:\n");
		String numero = Console.ReadLine();
		
		int numeroInt = Convert.ToInt32(numero);
		
		for (int i = 1; i <= numeroInt; i ++)
		{
			Console.WriteLine("\nDigite o " + i  + "º número:\n");
			String novoNumero = Console.ReadLine();
			int novoNumeroInt = Convert.ToInt32(novoNumero);
			
			if(novoNumeroInt % 2 == 0){
				Console.WriteLine(novoNumeroInt + " é par!");
			}
			else
				Console.WriteLine(novoNumeroInt + " não é par.");
			
		}	
	}
}
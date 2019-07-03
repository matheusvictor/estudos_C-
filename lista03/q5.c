using System;

public class Ex05
{
	public static void Main()
	{		
		Console.WriteLine("Digite o primeiro número:\n");
		String numero = Console.ReadLine();
		
		// Recebe a String e converte em Double, pois há a possibilidade do usuário digitar um número fracionado
		double numeroConvertido = Convert.ToDouble(numero);
		// Considera apenas a parte inteira caso o número digitado pelo usuário tenha parte fracionária
		int numeroInt = Convert.ToInt32(numeroConvertido);
		
		Console.WriteLine("Digite o segundo número:\n");
		String segundoNumero = Console.ReadLine();		
		
		double segundoNumeroConvertido = Convert.ToDouble(segundoNumero);
		int segundoNumeroInt = Convert.ToInt32(segundoNumeroConvertido);

		Console.WriteLine("\nO(s) números(s) inteiro(s) entre " + numeroConvertido + " e " + segundoNumeroConvertido + " é(são):\n");

		for(int i = numeroInt; i <= segundoNumeroInt; i ++){
			Console.WriteLine(i);
		}
			
	}
}
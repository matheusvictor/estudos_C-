/* Comando using: Este comando apenas importa uma bibloteca nativa básica do C# */ 
using System;

public class Ex02
{

	public static void Main()
	{
		Console.WriteLine("Digite um número:\n");
		String numero = Console.ReadLine();
		
		// Converte a String recebida em Double
		int numeroInt = Convert.ToInt32(numero);
		
		if(!(numeroInt > 15 && numeroInt < 100)){
			Console.WriteLine("\n" + numeroInt + " não pertence ao ao seguinte intervalo: 15<x<100.");
		}
		else
			Console.WriteLine("\n" + numeroInt + " percente ao seguinte intervalo: 15<x<100");		
	}
}
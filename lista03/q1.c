/* Comando using: Este comando apenas importa uma bibloteca nativa básica do C# */ 
using System;

/* Declaração de uma classe qualquer, no caso, chamada "Ex01" */ 
public class Ex01
{
	/* Método "Main", reconhecido automaticamente pelo compilador como ponto de início para execução do código-fonte do programa */ 
	public static void Main()
	{
		Console.WriteLine("Digite um número:\n");
		String numero = Console.ReadLine();
		
		// Converte a String recebida em Inteiro
		int numeroInt = Convert.ToInt32(numero);
		
		if(numeroInt > -1 && numeroInt < 1){
			Console.WriteLine("\n" + numeroInt + " fica entre 1 e -1");
		}
		else if (numeroInt > 10 && numeroInt < 30){
			Console.WriteLine("\n" + numeroInt + " fica entre 10 e 30");
		}
		else
			Console.WriteLine("\n" + numeroInt + " não está entre 1 e -1 nem entre 10 e 30");		
	}
}
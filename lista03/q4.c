using System;

public class Ex04
{
	public static void Main()
	{		
		Console.WriteLine("Digite um número:\n");
		String numero = Console.ReadLine();
		
		/**
			Convert.ToInt32 é utilizado para converter outros tipos de objeto (object, bool, string, etc) em um int, internamente ele utiliza int.Parse, porem adicionando a feature de retornar zero se o valor convertido for null, no mais é igual ao int.Parse.
			
			Fonte: https://raphaelcardoso.com.br/qual-a-diferenca-entre-int-parse-e-convert-toint32/
		**/
		
		// Recebe a String e converte em Double, pois há a possibilidade do usuário digitar um número fracionado
		double numeroConvertido = Convert.ToDouble(numero);
		
		// Considera apenas a parte inteira caso o número digitado pelo usuário tenha parte fracionária
		int numeroInt = Convert.ToInt32(numeroConvertido);
		
		Console.WriteLine("\nO(s) números(s) inteiro(s) entre " + 0 + " e " + numeroConvertido + " é(são):\n");
		
		for(int i = 0; i <= numeroInt; i ++){
			// Imprime os número inteiros entre 0 e a parte inteira do número digitado pelo usuário
			Console.WriteLine(i);
		}
			
	}
}
using System;

public class Ex09
{
	public static void Main()
	{		
		/**
		9. Faça um programa para ler: a descrição do produto (nome), a quantidade adquirida e o preço unitário.
		Calcular e escrever o total (total = quantidade adquirida * preço unitário), o desconto e o total a pagar (total a pagar = total - desconto), 
		sabendo-se que:
		- Se quantidade <= 5 o desconto será de 2%
		- Se quantidade > 5 e quantidade <=10 o desconto será de 3% 
		- Se quantidade > 10 o desconto será de 5%
		**/
		
		Console.WriteLine("Digite o nome do produto:\n");
		String produto = Console.ReadLine();
		
		Console.WriteLine("Digite a qtd adquirida de " + produto + ":\n");
		String qtd = Console.ReadLine();
		
		int qtdInt = Convert.ToInt32(qtd);
		
		Console.WriteLine("Digite o preço unitário do produto " + produto + "\n");
		String precoUn = Console.ReadLine();
		
		double precoUnConvertido = Convert.ToInt32(precoUn);
		
		double total = qtdInt * precoUnConvertido;
		double desconto;
		
		if(qtdInt <= 5){
			desconto = 0.02;
		}
		else if(qtdInt > 5 && qtdInt <= 10){
			desconto = 0.03;
		}
		else{
			desconto = 0.05;
		}
		
		double totalPagar = total - (total * desconto);
		
		Console.WriteLine("\nProduto: " + produto);
		Console.WriteLine("\nQtd adquirida: " + qtdInt);
		Console.WriteLine("\nPreço unitário: R$" + precoUnConvertido);
		Console.WriteLine("\nTotal: R$" + total);
		Console.WriteLine("\nDenconto: R$" + desconto);
		Console.WriteLine("\nTotal a pagar: R$" + totalPagar);

	}
}
public class IOSomaexemplo01 {
	// Método 1
	// import java.util.Scanner;
	public static void main(String[] args){
  		Scanner entrada = new Scanner(System.in);
  		int a, b;
  		int soma;
  		System.out.print("Informe o primeiro valor: ");
  		a = Integer.parseInt(entrada.nextLine());
  		System.out.print("Informe o segundo valor: ");
  		b = Integer.parseInt(entrada.nextLine());
  		soma = a + b;
  		System.out.println("A soma dos valores é: " + soma);
	}
}
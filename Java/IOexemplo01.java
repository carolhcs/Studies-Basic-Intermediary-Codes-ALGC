public class IOexemplo01{
// Método 1
// import java.util.Scanner;
public static void main(String[] args){
  Scanner entrada = new Scanner(System.in);
  System.out.print("Informe seu nome: ");
  String nome = entrada.nextLine();
  System.out.println("Seja bem-vinda(a), " + nome);
}
}
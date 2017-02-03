public class IOSomaexemplo02 {
	// Método 2
// import javax.swing.JOptionPane;
public static void main(String[] args){
  int a, b;
  int soma;
  a = Integer.parseInt(JOptionPane.showInputDialog("Informe o primeiro valor:"));
  b = Integer.parseInt(JOptionPane.showInputDialog("Informe o segundo valor:"));
  soma = a + b;
  JOptionPane.showMessageDialog(null, "A soma dos valores é: " + soma);

}
}
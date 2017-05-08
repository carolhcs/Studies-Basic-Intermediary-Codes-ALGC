/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 * ITERATIVA
 */
package fibonacci;
import java.util.Scanner;
/**
 * @author carolhcs
 */
public class Fibonacci03 {
    static long fib(int n) {
        int F = 0;     // atual
        int ant = 0;   // anterior
        for (int i = 1; i <= n; i++) {
            if (i == 1) {
                F = 1;
                ant = 0;
            } else {
                F += ant;
                ant = F - ant;
            }
        }
        return F;
    }
 
    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);
        int y;
        System.out.printf("Informe a quantidade de termos que deseja para a sequencia: ");
        y = ler.nextInt();
        for (int i = 0; i < y; i++) {
            System.out.print("(" + i + "):" + Fibonacci03.fib(i) + "\t");
        }
 
    }
}

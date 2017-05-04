/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package fibonacci;

import java.util.Scanner;
/**
 * @author carolhcs
 */
public class Fibonacci01 {
    static long fib(int n) {
        if (n < 2) {
            return n;
        } else {
            return fib(n - 1) + fib(n - 2);
        }
    }
    public static void main (String args[]){
        Scanner ler = new Scanner(System.in);
        int y;
        System.out.printf("Informe a quantidade de termos que deseja para a sequencia: ");
        y = ler.nextInt();
        for (int x = 0; x < y; x++) {
            System.out.print("(" + x + "):" + Fibonacci01.fib(x) + "\t");
        }
    }
}

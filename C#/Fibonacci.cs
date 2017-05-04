/*
 * Created by SharpDevelop.
 * User: carolhcs
 * Date: 04/05/2017
 * Time: 16:55
 * 
 * To change this template use Tools | Options | Coding | Edit Standard Headers.
 */
using System;

	public class Fibonacci {
		public static int Fib(int n) {
        	int a = 0;
        	int b = 1;
        	for (int i = 0; i < n; i++) {
            	int temp = a;
           	 	a = b;
            	b = temp + b;
        	}
        	return a;
    	}

    	static void Main() {
        	for (int i = 0; i < 15; i++) {
            	Console.WriteLine(Fib(i));
        	}
		}
	}

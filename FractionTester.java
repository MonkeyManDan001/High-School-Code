//Dan Mine Period 1
public class FractionTester 
{	
	public static void main(String[] args)
	{
		Fraction fraction1 = new Fraction(2,5);
		Fraction fraction2 = new Fraction(1,4);
		Fraction prodAns = fraction1.multiply(fraction2);
		Fraction quotAns = fraction1.divide(fraction2);
		
		System.out.println(fraction1 + " * " + fraction2 + " = " + prodAns);
		System.out.println(fraction1 + " * " + fraction2 + " = " + quotAns);

		//PREVIOUS
		
		//System.out.print(fraction1.getNumerator() + "/" + fraction1.getDenominator() + " * " + fraction2.getNumerator() + "/" + fraction2.getDenominator() + " = ");
		//System.out.println(prodAns.getNumerator() + "/" + prodAns.getDenominator());
		
		//System.out.print(fraction1.getNumerator() + "/" + fraction1.getDenominator() + " / " + fraction2.getNumerator() + "/" + fraction2.getDenominator() + " = ");
		//System.out.println(quotAns.getNumerator() + "/" + quotAns.getDenominator());
	}
}
/*
2/5 * 1/4 = 2/20
2/5 / 1/4 = 8/5
*/
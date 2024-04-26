//Dan Mine Period 1
public class Fraction 
{
	private int numerator;
	private int denominator;
	
	//Pre: receives 2 integers – a numerator and denominator. denominator can not be 0.
	//Post:  constructs a Fraction object with the 2 integers
	public Fraction (int inNumerator, int inDenominator)
	{
		numerator = inNumerator;
		denominator = inDenominator;
	}
	
	//Pre: N/A
	//Post:  returns the value of the numerator
	public int getNumerator()
	{
		return numerator;
	}

	// Pre: N/A
	//Post:  returns the value of the denominator
	public int getDenominator()
	{
		return denominator;
	}

	// Pre: receives a Fraction object
	//Post:  returns a Fraction object that contains the answer to the multiplication. The
	//	 state of the implicit and explicit objects is unchanged.
	public Fraction multiply (Fraction otherFraction)
	{
		int num = numerator * otherFraction.getNumerator();
		int den = denominator * otherFraction.getDenominator();
		
		Fraction answer = new Fraction(num,den);
		
		return answer;
	}
		
	//Pre: receives a Fraction object 
	//Post:  returns a Fraction object that contains the answer to the division.  The state 
	//       of the implicit and explicit objects is unchanged.
	public Fraction divide (Fraction otherFraction)
	{
		int num1 = numerator * otherFraction.getDenominator();
		int den1 = denominator * otherFraction.getNumerator();
		
		Fraction answer1 = new Fraction (num1,den1);
		
		return answer1;
	}
	
	public String toString()
	{
		return numerator + "/" + denominator;
	}

}

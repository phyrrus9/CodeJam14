import java.io.File;
import java.io.FileNotFoundException;
import java.io.PrintWriter;
import java.util.*;
import java.math.*;
public class Template
{
	public static void main(String[] args) throws FileNotFoundException
	{
		String inFile = args[0];
		Scanner input = new Scanner(new File(inFile));
		int cases = input.nextInt();
		MathContext mc = new MathContext(16);

		for(int i = 0; i < cases; i++)
		{
			//do shit here

			System.out.print("Case #" + (i + 1) + ": ");
			//print the data
		}
		input.close();
	}
}

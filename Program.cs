using System;


public class ComplexNumber
{
    private double realPart;
    private double imagePart;

    public double RealPart
    {
        get { return realPart; }
        set { realPart = value; }
    }

    public double ImagePart
    {
        get { return imagePart; }
        set { imagePart = value; }
    }

    public ComplexNumber(double realPart, double imagePart)
    {
        this.realPart = realPart;
        this.imagePart = imagePart;
    }

   
    public ComplexNumber(double realPart) : this(realPart, 0) { }

    
    public override string ToString()
    {
        if (imagePart >= 0)
        {
            return $"({realPart}+{imagePart}i)";
        }
        else
        {
            return $"({realPart}{imagePart}i)";
        }
    }

   
    public static ComplexNumber operator +(ComplexNumber a, ComplexNumber b)
    {
        double realResult = a.RealPart + b.RealPart;
        double imageResult = a.ImagePart + b.ImagePart;
        return new ComplexNumber(realResult, imageResult);
    }

    
    public static ComplexNumber operator -(ComplexNumber a, ComplexNumber b)
    {
        double realResult = a.RealPart - b.RealPart;
        double imageResult = a.ImagePart - b.ImagePart;
        return new ComplexNumber(realResult, imageResult);
    }

    
    public static ComplexNumber operator *(ComplexNumber a, ComplexNumber b)
    {
        double realResult = (a.RealPart * b.RealPart) - (a.ImagePart * b.ImagePart);
        double imageResult = (a.RealPart * b.ImagePart) + (a.ImagePart * b.RealPart);
        return new ComplexNumber(realResult, imageResult);
    }

    
    public static ComplexNumber operator /(ComplexNumber a, ComplexNumber b)
    {
        double divisor = (b.RealPart * b.RealPart) + (b.ImagePart * b.ImagePart);
        double realResult = ((a.RealPart * b.RealPart) + (a.ImagePart * b.ImagePart)) / divisor;
        double imageResult = ((a.ImagePart * b.RealPart) - (a.RealPart * b.ImagePart)) / divisor;
        return new ComplexNumber(realResult, imageResult);
    }
}
class Program
{
    static void Main(string[] args)
    {
        ComplexNumber complex1 = new ComplexNumber(1, 2);
        ComplexNumber complex2 = new ComplexNumber(3, -4);

        Console.WriteLine("복소수1: " + complex1);
        Console.WriteLine("복소수2: " + complex2);

        ComplexNumber sum = complex1 + complex2;
        ComplexNumber difference = complex1 - complex2;
        ComplexNumber product = complex1 * complex2;
        ComplexNumber quotient = complex1 / complex2;

        Console.WriteLine("덧셈: " + sum);
        Console.WriteLine("뺄셈: " + difference);
        Console.WriteLine("곱셈: " + product);
        Console.WriteLine("나누기: " + quotient);
    }
}

